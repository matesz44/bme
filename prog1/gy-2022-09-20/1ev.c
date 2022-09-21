#include <stdio.h>

int main(void) {
    int honap;
    int honapok[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    printf("Adja meg a hónap számát: ");
    scanf("%d", &honap);
    printf("A %d. hónap %d napos.\n", honap, honapok[honap-1]);
    
    return 0;
}
