#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    // C의 경우 오른쪽 비트시프트 연산자는 논리 연산자가 아닌 산술 연산자이므로 부호있는 자료형을 사용할 시 예상대로 동작하지 않을 수 있음
    unsigned int array[32] = { 82, 223, 179, 96, 241, 139, 28, 181, 87, 209, 159, 56, 75, 41, 217, 38, 127, 201, 163, 233, 83, 24, 79, 184, 106, 203, 135, 88, 91, 57, 30, 0 };
    
    for (unsigned int i = 0; i < 31; ++i) {
        unsigned int shift = i & 7;
        array[i] ^= i; 
        array[i] = (array[i] >> shift | array[i] << (8 - shift)); // ROR (ROL 역순으로)
        cout << (char)array[i];
    }
}
