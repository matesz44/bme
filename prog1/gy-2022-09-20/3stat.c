#include <stdio.h>

int main(void) {
    int szam;
    int eloford[10] = {0};
    printf("Adjon meg egy számot: ");
    while (scanf("%d", &szam) == 1) {
        printf("Adjon meg egy számot: ");
        if (szam >= 1 && szam <= 10)
            eloford[szam-1]++;
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
        printf("%d: %d db\n", i+1, eloford[i]);
    return 0;
}
