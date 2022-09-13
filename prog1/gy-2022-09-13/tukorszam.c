#include <stdio.h>

int main(void) {
    printf("Add meg a szamot: ");
    int szam;
    scanf("%d", &szam);

    int szaz = szam / 100;
    int egy = szam % 10;

    if (szaz == egy)
        printf("igen\n");
    else
        printf("nem\n");

    return 0;
}
