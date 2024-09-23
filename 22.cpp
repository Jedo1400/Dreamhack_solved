#include <iostream>

using namespace std;

int main() {
    short flag[20] = {0,}
        , array[20] = {172, 243, 12, 37, 163, 16, 183, 37, 22, 198, 183, 188, 7, 37, 2, 213, 198, 17, 7, 197};
    
    for (short i = 0; i < 20; ++i) {
        while (((flag[i] * 0xfb) & 0xff) != array[i]) { // IMUL EAX, EAX, 0xfb / AND EAX, 0xff
            ++flag[i];
        }
        cout << (char)flag[i]; // 네
    }    
}
