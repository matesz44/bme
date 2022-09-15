#include <stdio.h>

int main(void) {
    int tomb[10] = {25, 69, 54, 8, 77, 6, 29, 10, 3, 98};

    printf("A tömb: ");
    for (int i = 0; i < 10; i++) {
        //printf("%d ", tomb[i]);
        printf("[%d]=%d ", i, tomb[i]);
    }
    printf("\n");

    // min kivalasztas
    int legkisebb = tomb[0];
    int minhely = 0;
    for (int i = 1; i < 10; i++) {
        if (tomb[i] < legkisebb) {
            legkisebb = tomb[i];
            minhely = i;
        }
    }
    printf("A legkisebb szám: %d\n", legkisebb);
    printf("A legkisebb indexe: %d\n", minhely);

    printf("Jelölve:");
    for (int i = 0; i < 10; i++) {
        printf(" %d", tomb[i]);
        if (i == minhely)
            printf("[MIN]");
    }
    printf("\n");

    return 0;
}
