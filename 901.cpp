#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string cipher = "C@qpl==Bppl@<=pG<>@l>@Blsp<@l@AArqmGr=B@A>q@@B=GEsmC@ArBmAGlA=@q";
    string rev_cipher;

    for (auto &i : cipher)
        i ^= 3;
    
    reverse(cipher.begin(), cipher.end());

    for (auto &i : cipher)
        cout << (char)(i-0xd);
}
