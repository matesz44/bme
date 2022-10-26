#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../debugmalloc.h"

int main(void) {
    double *tomb;

    int index = 0;
    double szam = 0;
    printf("Kerem a szamot: ");
    scanf("%lf", &szam);

    while (szam != -1) {
        tomb = realloc(tomb, (index+1) * sizeof(double));
        if (tomb == NULL) {
            printf("Nem sikerult memoriat foglalni!\n");
            return -1;
        }

        tomb[index] = szam;
        index++;

        printf("Kerem a szamot: ");
        scanf("%lf", &szam);
    }

    if (index > 0) {
        for (int i = index-1; i >= 0; i--)
            printf("%g ", tomb[i]);
    } else {
        printf("Ures a tomb");
    }
    printf("\n");

    free(tomb);
    return 0;
}
