#include <stdio.h>
#include <stdbool.h>

bool prim_e(int szam);

int main(void) {
    int sz;
    int db = 0;

    for (sz = 2; sz <= 1000; sz++) {
        if (prim_e(sz))
            db++;
    }
    printf("%d prím.\n", db);
    return 0;
}

bool prim_e(int szam) {
    bool van = false;
    int oszt = 2;
    while (oszt < szam && !van) {
        if (szam % oszt == 0)
            van = true;
        oszt++;
    }
    return !van;
}
