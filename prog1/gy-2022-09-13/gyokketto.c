#include <stdio.h>

/*
 * 1 -> 1
 * ---
 * 2 -> 4
 * 1.1 -> 1.21
 * 1.2 1.44
 * 1.3 1.69
 * 1.4 1.96 -- 1.41 1.98 - 1.42 2.01
 * 1.5 2.25
*/
int main(void) {
    double tipp = 1;
    
    double valtozas = 1;

    for (int szamjegy = 0; szamjegy < 10; szamjegy++) {
        while (tipp*tipp < 2) {
            tipp += valtozas;
        }
        tipp -= valtozas;
        valtozas /= 10;
    }
    printf ("%lf\n", tipp);

    return 0;
}
