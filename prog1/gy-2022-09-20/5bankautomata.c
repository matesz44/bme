#include <stdio.h>

int main(void) {
    int penz_osszeg;
    scanf("%d", &penz_osszeg);

    int bankjegyek[] = {5,10,20,50,100,200,500,1000,2000,5000,10000,20000};

    for (int i = sizeof(bankjegyek) / sizeof(bankjegyek[0]) -1; i >= 0; i--) {
        int db = penz_osszeg / bankjegyek[i];
        if (db == 0) {
            continue;
        }
        printf("%d x %d\n", db, bankjegyek[i]);
        penz_osszeg = penz_osszeg % bankjegyek[i];

    }
    return 0;
}
