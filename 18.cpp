#include <iostream>

using namespace std;

int main() {
    short flag[27] = {0,}
        , array[27] = {36, 39, 19, 198, 198, 19, 22, 230, 71, 245, 38, 150, 71, 245, 70, 39, 19, 38, 38, 198, 86, 245, 195, 195, 245, 227, 227};
    
    for (short i = 0; i < 27; ++i) {
        while (array[i] != (flag[i] >> 4 | (flag[i] & 0xf) << 4)) {
            ++flag[i];
        }
        cout << (char)flag[i];
    }    
}
