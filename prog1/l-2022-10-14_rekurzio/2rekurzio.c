#include <stdio.h>

int fib(int);

int main(void) {
    printf("%d", fib(40));
    return 0;
}

int fib(int n) {
    if (n < 2)
        return n;
    return fib(n-1) + fib(n-2);
}
        
