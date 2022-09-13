#include <stdio.h>

/*
1 - I   --- X
2 - II
3 - III
4 - IV  --- XL
5 - V   --- L

2341 - MMCCCXLI
*/
int main(void) {
    printf("Kérek egy számot: ");
    int szam;
    scanf("%d", &szam);
    /*
    while (szam >= 1) {
        if (szam >= 1000) {
            printf("M");
            szam -= 1000;
        } else if (szam >= 500) {
    */
    while (szam >= 1000) {
        printf("M");
        szam -= 1000;
    }
    if (szam >= 900) {
        printf("CM");
        szam -= 900;
    }

    while (szam >= 500) {
        printf("D");
        szam -= 500;
    }
    if (szam >= 400) {
        printf("CD");
        szam -= 400;
    }

    while (szam >= 100) {
        printf("C");
        szam -= 100;
    }
    if (szam >= 90) {
        printf("XC");
        szam -= 90;
    }
    while (szam >= 50) {
        printf("L");
        szam -= 50;
    }
    if (szam >= 40) {
        printf("XL");
        szam -= 40;
    }
    while (szam >= 10) {
        printf("X");
        szam -= 10;
    }
    if (szam >= 9) {
        printf("IX");
        szam -= 9;
    }
    while (szam >= 5) {
        printf("V");
        szam -= 5;
    }
    if (szam >= 4) {
        printf("IV");
        szam -= 4;
    }
    while (szam >= 1) {
        printf("I");
        szam -= 1;
    }
    printf("\n");

    return 0;
}
