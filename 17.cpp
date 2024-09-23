#include <iostream>

using namespace std;

int main() {
    short flag[24] = {0,}
        , array[24] = {73, 96, 103, 116, 99, 103, 66, 102, 128, 120, 105, 105, 123, 153, 109, 136, 104, 148, 159, 141, 77, 165, 157, 69}; // DAT_140003000

    for (short i = 0; i < 23; ++i) {
        while (array[i] != (flag[i] ^ i) + i*2) // FUN_140001000
            ++flag[i];
        cout << (char)flag[i];
    }    
}
