#include <stdio.h>
#include <string.h>

typedef struct Vendeg {
    char nev[50+1];
    int szobaszam;
} Vendeg;

int vendeg_emelet(Vendeg vendeg) {
    return vendeg.szobaszam / 100;
}

Vendeg *vendeg_keres(Vendeg *vendegek, int meret, char *nev) {
    for (int i = 0; i < meret; i++) {
        if (strcmp(vendegek[i].nev, nev) == 0)
            return &vendegek[i];
    }
    return NULL;
}

void vendeg_szamol(Vendeg *vendegek, int meret, int *helyek) {
    for (int i = 0; i < 8; i++) {
        helyek[i] = 0;
    }

    for (int i = 0; i < meret; i++) {
        int emelet = vendeg_emelet(vendegek[i]);
        helyek[emelet]++;
    }
}

int legzsufoltabb(Vendeg *vendegek, int meret) {
    int helyek[8];
    vendeg_szamol(vendegek, meret, helyek);

    int maxIndex = 0;
    for (int i = 1; i < 8; i++) {
        if (helyek[i] > helyek[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}
