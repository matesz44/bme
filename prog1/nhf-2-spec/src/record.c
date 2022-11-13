#include "record.h"
#include <stdlib.h>
#include <string.h>

// az adatbazisfile 1 adott sorat kapja meg, es ebbol az osszes adatot kiirja formazva
void record_show_all(DB_t record) {
    if (record.N == NULL)
        printf("Nem létezik ilyen sorszámú rekord!\n");
    else
        printf("%20s | %20s | %20s | %20s | %20s\n", record.N, record.TEL, record.EMAIL, record.TITLE, record.ADR);
}
