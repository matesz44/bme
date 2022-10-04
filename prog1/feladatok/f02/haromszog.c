#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("Add meg a 3szog 3 oldalat (a b c): ");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b > c && a+c > b && b+c > a) {
        printf("letezik\n");
            if (a*a == b*b+c*c) {
                printf("

