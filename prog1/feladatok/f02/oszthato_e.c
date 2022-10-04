#include <stdio.h>

int main(void) {
    int a,b;
    printf("Adj meg 2 szamot (a b): ");
    scanf("%d %d", &a,&b);
    if (a % b == 0 || b % a == 0)
        printf("igen\n");
    else
        printf("nem\n");

    return 0;
}
