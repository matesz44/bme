#include <stdio.h>

int main(void) {
    char szoveg[] = "Hello World!";
    // hello world!
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A'+'a';
        }
        printf("%c", c);
    }

    return 0;
}
