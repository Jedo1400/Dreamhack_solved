#include <iostream>

using namespace std;

int main() {
    short cipher[33] = { 0xf8, 0xe0, 0xe6, 0x9e, 0x7f, 0x32, 0x68, 0x31, 0x05, 0xdc, 0xa1, 0xaa, 0xaa, 0x09, 0xb3, 0xd8, 0x41, 0xf0, 0x36, 0x8c, 0xce, 0xc7, 0xac, 0x66, 0x91, 0x4c, 0x32, 0xff, 0x05, 0xe0, 0xd9, 0x91, 0x00 };

    short param_2[] = { 0x11, 0x33, 0x55, 0x77, 0x99, 0xbb, 0xdd, 0x00 };
    short param_3[] = { 0xef, 0xbe, 0xad, 0xde, 0x00 };
    short param_4[] = { 0xde, 0xad, 0xbe, 0xef, 0x00 };
    
    for (short i = 0; i < 32; ++i) {
        cipher[i] ^= param_2[i % 7]
        , cipher[i] -= 166
        , cipher[i] ^= param_3[i % 4]
        , cipher[i] += 59
        , cipher[i] ^= param_4[i % 4];
    }

    for (short i = 0; i < 32; ++i)
        cout << (char)cipher[i];

}
