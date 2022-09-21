#include <stdio.h>

int main(void) {
    int sz;

    while(scanf("%d", &sz) == 1) {
        int oszto = 2;

        if (sz >= 2) {
            while (sz % oszto != 0 && oszto != sz) {
                oszto++;
            }
            if (oszto == sz)
                printf("prim\n");
            else
                printf("nem\n");
        } else {
            printf("csak 1-nél nagyobbakat\n");
        }
    }
    return 0;
}
