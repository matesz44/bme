#include <stdio.h>
#include "menu.h"

int main(void) {
    while (mainmenu() != 0);
    printf("Exiting...\n");
    return 0;
}
