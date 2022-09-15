#include <stdio.h>

/*
Legyen n értéke 1.
Legyen a szorzat 1.
Ismétlés, amíg n≤8
    A szorzat legyen szorzat × n.
    Növeld n értékét eggyel.
Ismétlés eddig
Írd ki a szorzatot.
*/

int main(void) {
    int n = 1, szorzat = 1;
    while (n <= 8) {
        szorzat *= n;
        printf("Ciklusváltozó: %d, Szorzat: %d\n", n, szorzat);
        n++;
    }
    printf("%d\n", szorzat);
    return 0;
}
