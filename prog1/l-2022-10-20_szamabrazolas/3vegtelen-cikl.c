// integer overflow
#include <stdio.h>

int main(void) {
    signed char i = 1;
    while (i > 0)
        i++;
    printf("%d\n", i); 
    // int: -2147483648
    // short int: -32768
    // signed char: -128 =mert=> 127 -> -128 -> -127 ...
    return 0;
}
