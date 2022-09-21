#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int ev, honap, nap;
    scanf("%d-%d-%d", &ev, &honap, &nap);

    bool szokoev_e = (ev % 4 == 0 && ev % 100 != 0) || ev % 400 == 0;

    int napok_szama[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int ev_napja = 0;
    for (int i = 1; i < honap; i++) {
        ev_napja += napok_szama[i-1];
    }

    ev_napja += nap;

    if (szokoev_e && honap >= 3) {
        ev_napja++;
    }

    printf("%d-%d-%d az év %d. napja\n", ev, honap, nap, ev_napja);


    return 0;
}
