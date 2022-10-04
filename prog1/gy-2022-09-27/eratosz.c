#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool prim[1000];
    for (int sz = 0; sz < 1000; sz++)
        prim[sz] = true;
    for (int sz = 2; sz < 1000; sz++) {
        if (prim[sz]) {
            for (int t = sz*2; t < 1000; t++)
                prim[t] = false;
        }
    }

    for (int sz = 2; sz < 1000; sz++)
        if (prim[sz])
            printf("%d ", sz);
    
    printf("\n");

    return 0;
}
