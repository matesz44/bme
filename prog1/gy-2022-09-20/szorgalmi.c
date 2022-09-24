#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 4 oldalu
 * 6
 * 8
 * 10
 * 12
 * 20
 * 100 (2 db 10 oldalu de most 1-nek vesszuk)
 * 
 * xdy formaban jeloljuk
 *  y = oldalszam(4,6,8...)
 *  x = hanyszor dubjunk vele
 *      5d4 ==> 5-szor dobsz 4oldaluval
 * --osszefuzzuk "+" jelekkel--
 * dobassorozat: 4d4+5d6
 *
 * feladat: ilyen sorozat alapjan generaljunk random szamokat,
 * mintha kockadobasok lennenek, majd irjuk ki a dobasok osszeget
 * 4d4+5d6: 1, 2, 3, 2, 4, 5, 1, 6, 2 26
 * (4: 1,2,3,2 ; 5: 4,5,1,6,2 sum: 1+2+3+2+4+5+1+6+2=26)
 *
 * minden kocka csak egyszer jelenik meg
 * no tombok
 * dobasok sorrendje tetszoleges
 *
 * +1p: dobások után magaban allo szam ami csak az osszeghez adodik hozza
 *  (sorban NEM jelenik meg)
 *
 * tipp: scanf beolvas "+" jel getchar()-ral
*/

/*
 *skeleton:
 * 1. beker "+"-ig 
 * 2. legeneral "+"-ig
 * 3. beker kovetkezo "+"-ig
 * 4. ...
 * 5. EOF-nal 
*/

int main(void) {
    srand(time(0));

    int x,y, dobas,sum;
    char c;

    while((char)c != '\n') {
        scanf("%dd%d", &x, &y);// != EOF) {
        c = getchar();

        for (int i = 0; i<x; i++) {
            dobas = rand() % y + 1;
            printf("%d ", dobas);
            sum += dobas;
        }
    }
    printf("==> %d\n", sum);
    
    return 0;
}
