#include <stdio.h>

int main(void) {
    int szam[3], maradek[2];

    puts("Kongruencia T/F: a b m");
    do {
        scanf("%d %d %d", &szam[0], &szam[1], &szam[2]);
    } while (szam[2] == 0);

    for (int i = 0; i <= 1; i++) {
        maradek[i] = szam[i] % szam[2];
        if (maradek[i] < 0)
            maradek[i] += szam[2];
    }

    if (maradek[0] == maradek[1])
        printf("T: %d≡%d (%d) -> %d\n", szam[0], szam[1], szam[2], (maradek[0]));
    else
        puts("F");

    return 0;
}
