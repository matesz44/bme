#include <stdio.h>

int main(void) {
    int oszto=2, szam;
    printf("Add meg a számot: ");
    scanf("%d", &szam);
    while (szam > 1) {
        if (szam % oszto == 0) {
            printf("%3d|%d\n", szam, oszto);
            szam /= oszto;
        } else {
            oszto++;
        }
    }
    printf("%3d|\n", szam);

    return 0;
}
