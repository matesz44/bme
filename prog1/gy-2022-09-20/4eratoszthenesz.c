#include <stdio.h>
#define szamok_szama 1000

int main(void) {
    int szamok[szamok_szama] = {0};
    for (int i = 0; i < szamok_szama; i++) {
        szamok[i] = i + 1;
    }

    szamok[0] = 0;

    for (int i = 0; i < szamok_szama; i++) {
        if (szamok[i] != 0) {
            printf("%d\n", szamok[i]);

            for (int j = i; j < szamok_szama; j += i+1) {
                szamok[j] = 0;
            }
        }
    }
    return 0;
}
