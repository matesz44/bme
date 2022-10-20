#include <stdio.h>

int main(void) {
    unsigned long int a = 29;
    unsigned long szamok[9] = { 0U, 1931988508U, 581177634U, 581374240U,
                            581177632U, 581177634U, 1919159836U, 0U };

    for (int j = 0; j < 9; j++) {
    for (int bit = 32; bit >= 0; bit--) {
        printf("%c", szamok[j]>>bit & 1 ? '#' : ' ');
    }
    printf("\n");
    }

    return 0;
}
    

