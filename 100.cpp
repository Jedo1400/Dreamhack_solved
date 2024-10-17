#include <iostream>

using namespace std;

int main() {
    int int_array[] =
    {
		148,
		27,
		14,
		27,
		34,
		25,
		10,
		30,
		48,
		33,
		23,
		15,
		19,
		43,
		46,
		30,
		23,
		15,
		19,
		43,
		33,
		34,
		60,
		54,
		49,
		47,
		42,
		42,
		51,
		80,
		63, // == D^H + H^{
		137
	};

    int pre_proc[32]{0,};
    unsigned int input[32]; // start with DH{, end with }
    
    pre_proc[31] = '}';

    for (int i{}; i <= 31; ++i)
        while (int_array[i] != pre_proc[31-i] + pre_proc[31-i-1])
            ++pre_proc[31-i-1];
    
    for (int i = 31; i >= 1; --i)
        pre_proc[i-1] ^= pre_proc[i];

    for (int i{}; i <= 31; ++i)
        cout << (char)pre_proc[i];
}
