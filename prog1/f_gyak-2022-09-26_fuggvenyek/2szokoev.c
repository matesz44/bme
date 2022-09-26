#include <stdio.h>
#include <stdbool.h>

bool szoko_e(int);

int main(void) {
    printf("Adj meg egy evet: ");
    int ev;
    scanf("%d", &ev);
    if(szoko_e(ev))
        printf("Szokoev");
    else
        printf("Nem szokoev");

    return 0;
}

bool szoko_e(int ev) {
    return (ev % 4 == 0 && (ev % 100 != 0 || ev % 400 == 0));
}
