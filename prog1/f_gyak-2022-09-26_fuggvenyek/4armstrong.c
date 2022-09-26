#include <stdio.h>

int szjegyek(int);
int hatvany(int, int);

int main(void) {
// hany jegyu
    printf("Adj meg egy szamot: ");
    int szam;
    scanf("%d", &szam);
    printf("%d %d szamjegyu.\n", szam, szjegyek(szam));

// hatvany
    printf("Adj meg egy szamot es egy hatvanykitevot (a b): ");
    int kitevo;
    scanf("%d %d", &szam, &kitevo);
    printf("%d a %d.-on = %d\n", szam, kitevo, hatvany(szam, kitevo));

// armstrong
    printf("Adj meg egy szamot: ");
    scanf("%d", &szam);

    int szjegy = szjegyek(szam); //4
    int legnagyobb = hatvany(10, szjegy-1); //10^3 = 1000
    int temp = szam, sum = 0;

    while (temp > 0) {
        int curr = temp / legnagyobb;
        sum += hatvany(curr, szjegy);
        temp -= curr * legnagyobb;
        legnagyobb /= 10;
    }
    if (sum == szam)
        printf("%d egy armstrong szam\n", szam);
    else
        printf("%d nem egy armstrong szam\n", szam);

    return 0;
}

int szjegyek(int num) {
    int db = 0, jegy = 1;
    while (num / jegy != 0) {
        db++;
        jegy *= 10;
    }
    return db;
}

int hatvany(int num, int pow) {
    int veg = 1;
    for (int i = 0; i < pow; i++)
        veg *= num;
    return veg;
}
