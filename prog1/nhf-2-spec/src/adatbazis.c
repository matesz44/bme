#include "adatbazis.h"
#include <stdlib.h>
#include <string.h>


// az egesz adatbazisfileon soronkent vegigmegy, es kiirja a sorok tartalmat roviditve(Nev, Tel, Email), formazva
void db_show_short(DB_t *db, int meret) {
    printf("<ID>: NEV | TEL | EMAIL\n");
    for (int i = 1; i < meret; i++) {
        printf("<%d>: %20s |%12s |%30s\n", i, db[i].N, db[i].TEL, db[i].EMAIL);
    }
}
