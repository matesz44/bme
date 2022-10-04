#include <stdio.h>

void fel_terf(double*);

int main(void) {
    double el = 2.7;
    fel_terf(&el);

    return 0;
}

void fel_terf(double *oldal) {
    printf("Felulet: 6*oldal^2 = 6*%g*%g = %g\n", *oldal, *oldal, 6*(*oldal)*(*oldal));
}
