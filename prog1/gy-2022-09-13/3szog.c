#include <stdio.h>

/* 
"_" * (n - (i + 1))
"o" * (i * 2 + 1)
*/

int main(void) {
    printf("Add meg a sorok számát: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int szokoz = 0; szokoz < n-(i+1); szokoz++)
            printf(" ");
        for (int obetu=0; obetu < i*2 + 1; obetu++)
            printf("o");

        printf("\n");
    }

    return 0;
}
