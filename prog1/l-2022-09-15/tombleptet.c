#include <stdio.h>

int main(void) {
    char tomb[10] = {'P', 'i', 't', 'a', 'g', 'o', 'r', 'a', 's', 'z'};
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {
            printf("%c ", tomb[i]);
        }
        char temp=tomb[0];
        for (int i = 0; i < 9; i++)
            tomb[i] = tomb[i+1];
        tomb[9] = temp;
        printf("\n");
    }
    return 0;
}
