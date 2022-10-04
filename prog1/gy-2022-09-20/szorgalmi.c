#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

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
 * dobastarra no tomb
 * dobasok sorrendje tetszoleges
 *
 * +1p: dobások után magaban allo szam ami csak az osszeghez adodik hozza
 *  (sorban NEM jelenik meg)
 *
 * tipp: scanf beolvas "+" jel getchar()-ral
*/

bool volt_e(int);

int tipus[8] = {0};

int main(void) {
    srand(time(0));

    int x,y, dobas,sum;
    char c;

    while((char)c != '\n') {
        scanf("%dd%d", &x, &y);
        c = getchar();

        if (volt_e(y)) {
            printf("\nERR: (y=%d) Nem létezik a kocka vagy volt már egyszer!\n", y);
        } else {
            for (int i = 0; i<x; i++) {
                dobas = rand() % y + 1;
                printf("%d ", dobas);
                sum += dobas;
            }
        }
    }
    printf("==> %d\n", sum);
    
    return 0;
}

bool volt_e(int y) {
    switch(y) {
        case 4: tipus[0]++; break;
        case 6: tipus[1]++; break;
        case 8: tipus[2]++; break;
        case 10: tipus[3]++; break;
        case 12: tipus[4]++; break;
        case 20: tipus[5]++; break;
        case 100: tipus[6]++; break;
        default: tipus[7]++; break; // ha nem letezo kockat ad meg
    }

    for (int i = 0; i < 8; i++)
        if (tipus[i] > 1 || tipus[7]!=0)
            return true;
    return false;
}
