#include "adatbazis.h"

void db_show_short(DB_t db) {
    for (int i = 0; i < db.length; i++) {
        printf(
               "NEV: %s\n"
               "TELEFONSZAM: %s\n"
               "EMAIL: %s\n", db.N, db.TEL, db.EMAIL
               );
    }
}
