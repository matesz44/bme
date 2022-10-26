#include <stdio.h>
#include <stdlib.h>
#include "../debugmalloc.h"

int main(void) {
    printf("Hany: ");
    int n;
    scanf("%d", &n);

    double *tomb;
    tomb = (double*) malloc(n * sizeof(double));
    if (tomb == NULL) {
        printf("Nem sikerult memoriat foglalni!\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        printf("Kerem a szamot a tombbe: ");
        scanf("%lf", tomb+i);
    }
    for (int i = n-1; i >= 0; i--)
        printf("%g, ", tomb[i]);

    free(tomb);
    return 0;
}
