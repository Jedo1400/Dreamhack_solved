#include <iostream>
#include <vector>
#include <string>

using namespace std;

int hex_to_dec(char c) {
    return c >= 97 ? c - 87 : c - 48;
}

int main() {
    string cipher = "220c6a33204455fb390074013c4156d704316528205156d70b217c14255b6ce10837651234464e";
    vector<int> chopped_chiper;
    vector<int> result;

    for (short i = 0; i < cipher.length(); i += 2)
        chopped_chiper.push_back(hex_to_dec(cipher[i]) * 16 + hex_to_dec(cipher[i+1]));

    int local_c = (chopped_chiper.size() + 7) >> 3;

    int i = 0;
    switch(chopped_chiper.size() % 8) {
        case 0:
            do {
                result.push_back(chopped_chiper[i] ^ 0x88);
                ++i;
            switchD_00101267_caseD_7:
                result.push_back(chopped_chiper[i] ^ 0x66);
                ++i;
            switchD_00101267_caseD_6:
                result.push_back(chopped_chiper[i] ^ 0x44);
                ++i;
            switchD_00101267_caseD_5:
                result.push_back(chopped_chiper[i] ^ 0x11);
                ++i;
            switchD_00101267_caseD_4:
                result.push_back(chopped_chiper[i] ^ 0x77);
                ++i;
            switchD_00101267_caseD_3:
                result.push_back(chopped_chiper[i] ^ 0x55);
                ++i;
            switchD_00101267_caseD_2:
                result.push_back(chopped_chiper[i] ^ 0x22);
                ++i;
            switchD_00101267_caseD_1:
                result.push_back(chopped_chiper[i] ^ 0x33);
                --local_c, ++i;
            } while (0 < local_c);
            break;
        case 1:
            goto switchD_00101267_caseD_1;
        case 2:
            goto switchD_00101267_caseD_2;
        case 3:
            goto switchD_00101267_caseD_3;
        case 4:
            goto switchD_00101267_caseD_4;
        case 5:
            goto switchD_00101267_caseD_5;
        case 6:
            goto switchD_00101267_caseD_6;
        case 7:
            goto switchD_00101267_caseD_7;
    }

    for (auto &i : result)
        cout << (char)i;
}
