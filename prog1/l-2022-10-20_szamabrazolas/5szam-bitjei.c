#include <stdio.h>

int main(void) {
    unsigned long int a = 29;
    for (int bit = 32; bit >= 0; bit--) {
        printf("%lu", a>>bit & 1);
    }
    printf("\n");

    return 0;
}
    
