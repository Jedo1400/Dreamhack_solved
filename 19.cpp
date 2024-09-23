#include <iostream>

using namespace std;

int main() {
    short array[24] = {173, 216, 203, 203, 157, 151, 203, 196, 146, 161, 210, 215, 210, 214, 168, 165, 220, 199, 173, 163, 161, 152, 76, 0}
        , result[24] = {0,};

    for (short i = 22; i >= 0; --i)
        result[i] = array[i] - result[i+1];

    for (short i = 0; i < 23; ++i)
        cout << (char)result[i];
}
