#include <stdio.h>

// debugolni, megerteni (szorzat=? amikor n=3)

int main(void) {
    int szorzat = 1, n = 8;
    while (n > 1) { // n = 3 --> szorzat=6720
        szorzat *= n;
        n--;
    }
    printf("%d\n", szorzat);
    return 0;
}
