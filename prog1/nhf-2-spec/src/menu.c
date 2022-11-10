#include <stdlib.h>
#include "menu.h"
#include "adatbazis.h"

DB_t db[] = { 
    {"name", "title", "adr", "tel", "email@email.com"},
    {"test1N", "test1T", "test1ADR", "test1TEL", "test1EMAIL"}
};

int input_shell() {
    char input[10];
    int cmd = 0;
    while (!cmd) {
        scanf("%s", input);
        sscanf(input, "%d", &cmd);

        if (input[0] == 'q')
            return 0;
        else if (!cmd)
            printf("Hibas input, probalja ujra\n> ");
    }
    return cmd;
}

int menu(char* s) {
    printf("%s", s);
    printf("[q] KILEP\n> ");

    return input_shell();
}

int mainmenu(void) {
    int next=1, menulevel = 1, id=0, prev=0, torol=0;

    while (next != 0 || menulevel != 0) {
        // debug: printf("%d | %d\n", next, menulevel);
        if (id != 0) { // szerkesztes
            printf("%d. rekord %d. entry-enek szerkesztese\n", id, next);
            printf("record_edit_entry(%d, %d);\n", id, next);
            id = 0;
            next = 3;
        }

        switch (menulevel) {
            // mainmenu - menulevel = 1
            case 1: 
                next = menu("TELEFONKONYV - BN8QZW\n"
                            "[1] UJ\n"
                            "[2] LISTAZ\n"
                            "[3] SZERKESZT\n"
                            "[4] TOROL\n"
                            "[5] KERES\n"
                            "[6] EXPORT\n"
                            "");
                next ? menulevel++ : menulevel--;
                break;

            // mainmenubol valasztott almenu - menulevel = 2
            case 2:
                switch (next) {
                    case 1: prev = next;
                            next = menu("\n"
                                   "[1] MANUALISAN BEIR\n"
                                   "[2] VCARD IMPORT\n"
                                   "[3] CSV (adatbazis) IMPORT (mostani adatbazis filehoz iras)\n"
                                   "");
                            next ? menulevel++ : menulevel--;
                            break;
                    case 2: // LIST EVERY ENTRY IN DB IN SHORT FORMAT (NEV, TELSZAM, EMAIL)
                            prev = next;
                            db_show_short(db, 2);
                            menulevel++;
                            break;
                    case 3: prev = next;
                            printf("Melyik rekord legyen szerkesztve?\n> ");
                            next = input_shell();
                            next ? menulevel++ : menulevel--;
                            break;
                    case 4: prev = next;
                            printf("Melyik rekord legyen torolve?\n> ");
                            next = input_shell();
                            next ? menulevel++ : menulevel--;
                            break;
                    case 5: prev = next;
                            printf("Mi szerint keres?\n");
                            next = menu(""
                                        "[1] NEV\n"
                                        "[2] TELEFONSZAM\n"
                                        "[3] EMAIL\n"
                                        "");
                            next ? menulevel++ : menulevel--;
                            break;
                    case 6:
                            printf("Melyik rekordot?\n> ");
                            next = input_shell();
                            printf("Mi legyen a .vcf file neve?\n> ");
                            char fname[254+1];
                            scanf("%s", fname);
                            printf("record_export_vcf(%s,%d);", fname, next);
                            printf("<%s.vcf> SIKERESEN LETREHOZVA a %d. rekordbol / NEM SIKERULT!\n", fname, next);
                            next = 0;
                            menulevel--;
                            break;
                }
                break;

            // almenu VALAMELYIKEBOL valasztott almenu - menulevel = 3 !FIGYELNI KELL A prev-et, hogy tudjuk melyik menubol valaszottunk szamot
            case 3:
                switch (prev) {
                    case 1: // masodik almenubol ELSO 
                        switch(next) {
                            case 1: // rekord bekerese soronkent --> 1 1
                                    printf("record_soronkentIn();\n");
                                    // soronkent bekeres, uj sorkent db-be adas
                                    menulevel--;
                                    break;
                            case 2: // vcard import --> 1 2
                                    printf("import_from_vcard();\n");
                                    // vcard filenev bekeres, (syntax check), ha van uj sorkent db-be, ha nincs warning, filenev ujra bekerese, q-kilep
                                    next = 1; // uj menube vissza, ha ez nincs instant listazni fog
                                    menulevel--;
                                    break;
                            case 3:
                                    printf("import_from_csv();\n");
                                    // csv file bekeres, (syntax check), ha van es egyeznek a fejlecek catolja a mostani db vegere az osszeset, ha nincs warning, filenev ujra bekerese, q-kilep
                                    next = 1;
                                    menulevel--;
                                    break;
                            default: printf("Ilyen menupont nem letezik\n");
                                     next = 1;
                                     menulevel--;
                                     break;
                        }
                        break;

                    case 2: // listaz
                            next = menu("Rekord reszletes kiirasa\n");
                            if (next == 0) {
                                menulevel-=2;
                            } else {
                                printf("record_show_all(%d); // %d. sor a db_filebol\n", next, next);
                            }
                            break;
                    case 3: // szerkeszt -> <record_id> -> melyik  --> 3 n 
                            id = next;
                            printf("A rekord melyik adatat?\n");
                            next = menu(""
                                        "[1] NEV\n"
                                        "[2] FOGLALKOZAS\n"
                                        "[3] CIM\n"
                                        "[4] TELEFONSZAM\n"
                                        "[5] EMAIL\n"
                                        "");
                            menulevel-=2;
                            break;
                    case 4: // torles -> i/n --> 4 1/2
                            torol = next;
                            printf("Tenyleg szeretne torolni a %d. rekordot?\n", torol);
                            next = menu("[1] IGEN, BIZTOS\n");
                            if (next == 1) {
                                printf("record_delete(%d);\n", torol);
                                menulevel--;
                            }
                            next = 4;
                            menulevel--;
                            break;
                    case 5: // keres -> mi szerint -> keres_by_xyz("txt") --> 5 1-3 <szoveg>
                            next = 5;
                            menulevel--;
                            break;
                }
                break;

        }
    }
                       
    return 0;
}
