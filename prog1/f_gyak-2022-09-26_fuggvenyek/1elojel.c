#include <stdio.h>
#include <stdbool.h>

bool elojel(int, int);

int main(void) {
    int a,b;
    printf("Adj meg 2 szamot (a b): ");
    scanf("%d %d", &a, &b);
    if (elojel(a, b))
        printf("Egyeznek az elojelek\n");
    else
        printf("Nem egyeznek az elojelek\n");
    return 0;
}

bool elojel(int a, int b) {
    if ((a >= 0 && b >= 0) || (a < 0 && b < 0))
        return true;
    else
        return false;
}
