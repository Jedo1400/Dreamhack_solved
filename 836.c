#include <stdio.h>

int main() {
    int n;
    scanf("%x", &n);
    printf("%d\n", 0x7d1c4b0a ^ n); // flip a0b4c1d7
}