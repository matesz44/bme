#include <stdio.h>

void kiir_it(int*, int);
int kiir_rek(int*, int);

int main(void) {
    int tomb[5] = {1,2,3,4,5};
    printf("iteracio: ");
    kiir_it(tomb, 5);
    printf("rekurzio: ");
    kiir_rek(tomb, 5);

    return 0;
}

void kiir_it(int* tomb, int meret) {
    for (int i = 0; i < meret; i++)
        printf("%d, ", tomb[i]);
}

int kiir_rek(int* tomb, int meret) {
    if (tomb-meret == 0)
        return tomb[meret-1];
    printf("%d", tomb[0]);
    return kiir_rek(tomb+1, 5);
}
