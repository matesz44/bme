#include <stdio.h>

int main(void) {
    printf("Adj meg egy keresztnevet: ");
    char keresztnev[20];
    scanf("%s", keresztnev);

    int i = 0;
    while (keresztnev[i] != '\0') {
        printf("%c\n", keresztnev[i]);
        i++;
    }
    
    return 0;
}
