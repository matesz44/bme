#include <stdio.h>

int main(void) {
    char betu;
    while (scanf("%c", &betu) == 1) // EOF = <ctrl>+{c,d} ; 1:eltarolja a beirt chart betu-ben, 2:amig nem EOF (végjel) chart kap, folyton ismétlődik a ciklus
        printf("betu='%c', betu=%d\n", betu, betu); // egyszer magat a karaktert, maskor a decimalis ascii kodjat adja vissza

    return 0;
}
