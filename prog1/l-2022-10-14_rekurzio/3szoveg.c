#include <stdio.h>

void sztringet_kiir_1(char *szoveg) {
    if (szoveg[0] == '\0')
        return;
    putchar(szoveg[0]);
    printf("%s", szoveg + 1);     /* 1 if */
}
 
 
void sztringet_kiir_2(char *szoveg) {
    if (szoveg[0] == '\0')
        return;
    putchar(szoveg[0]);
    sztringet_kiir_2(szoveg + 1); /* ujbol futtatja mindig feleslegesen */
}
 
 
int main(void) {
    sztringet_kiir_1("alma");
    sztringet_kiir_2("alma");
    
    return 0;
}
