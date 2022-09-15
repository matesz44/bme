#include <stdio.h>

// debug: b = ? amikor a = 374
int main(void) {
    int a = 11220, b = 2002;
    while (b > 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("lnko = %d\n", a);
    return 0;
}
