#include <stdio.h>

int fakt(int n) {
    if (n == 1)
        return 1;
    else
        return n * fakt(n-1);
}

int main(void) {
    int sz = 5;
    int faktsz = fakt(sz);
    printf("%d\n", faktsz);
    return 0;
}
