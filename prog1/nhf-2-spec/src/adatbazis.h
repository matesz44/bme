#include <stdio.h>

// csv file 1. sor:
// N, TITLE, ADR, TEL, EMAIL
// --1. rekord(2. sor)--
// nev2, title1, adr1, tel1, email1

// adatbazisfile struktura (ebbe lesznek betoltve a db filebol az egyes sorok
typedef struct DB_t {
    char *N;
    char *TITLE;
    char *ADR;
    char *TEL;
    char *EMAIL;
} DB_t;

int db_syntax_check(FILE);  // jo, rossz
DB_t db_open(FILE);         // csv parser
int db_write(FILE, DB_t);   // writes DB_t to FILE | siker, fail
void db_show_short(DB_t*, int);   // printer
