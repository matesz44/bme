#include <stdio.h>

int alap(int);
int add1(int);
int elojel(int);
int mult2(int);

int main(void) {
    int a = 1;
    do {
        printf("a: %d\n", a);
        printf("0. Alapertek visszaallitasa (a = 1)\n"
        "1. Hozzaad 1-et\n"
        "2. Megforditja az elojelet\n"
        "3. Szorozza 2-vel\n"
        "9. Kilepes\n");
        scanf("%d", &a);

        switch(a) {
            case 0: a = alap(a); break;
            case 1: a = add1(a); break;
            case 2: a = elojel(a); break;
            case 3: a = mult2(a); break;
            case 9: a = 9; break; // exit
        }
    } while (a != 9);

    return 0;
}

int alap(int a) {
    return 1;
}

int add1(int a) {
    return a+1;
}
int elojel(int a) {
    return -a;
}
int mult2(int a) {
    return a*2;
}
