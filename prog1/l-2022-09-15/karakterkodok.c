#include <stdio.h>

int main(void) {
    char betu;
    while (scanf("%c", &betu) == 1) // EOF = <ctrl>+{c,d}
        printf("betu='%c', betu=%d\n", betu, betu);

    return 0;
}
