#include <stdio.h>

double fakt(int);

int main(void) {
    printf("Add meg a pontossagot: ");
    int n;
    scanf("%d", &n);
    
    double e = 1; // 0! = 1
    for (int i = 1; i <= n; i++) {
        e += 1 / fakt(i);
    }
    printf("e = %f", e);

    return 0;
}

double fakt(int num) {
    int faktorialis = num;
    for (int i = num-1; i > 1; i--)
        faktorialis *= i;
    return faktorialis;
}

