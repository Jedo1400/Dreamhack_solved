#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    short array[27] = { 0x2b, 0x44, 0x1b, 0x52, 0x2b, 0x5e, 0x1b, 0x05, 0x01, 0x6e, 0x19, 0x5e, 0x0f, 0x63, 0x01, 0x01, 0x2b, 0x74, 0x20, 0x4e, 0x15, 0x46, 0x3c, 0x77, 0x7c, 0x43, 0x00 };

    for (short i = 26; i >= 0; --i)
        array[i] ^= array[(i+1) & 25];

    for (short i = 0; i < 26; ++i) {
        cout << (char)array[i];
    }
}
