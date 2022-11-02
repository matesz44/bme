#include <stdio.h>
#include <ctype.h>
#include "menu.h"

int input_shell() {
    char cmd;
    scanf(" %c", &cmd);
    while ((cmd < '0' || cmd > '9') && cmd != 'q') {
        printf("Helytelen input, adja meg mégegyszer amit szeretne...\n> ");
        scanf(" %c", &cmd);
    }
    if (tolower(cmd) == 'q')
        return 0;

    return cmd-'0';
}

int menu(char* s) {
    printf("%s", s);
    printf("[q] KILEP\n> ");

    return input_shell();
}

int mainmenu(void) {
    int next=1, menulevel = 1, id;

    while (next != 0 || menulevel != 0) {
        // debug: printf("%d | %d\n", next, menulevel);
        switch (menulevel) {
            case 1: next = menu("TELEFONKONYV - BN8QZW\n"
                                "[1] UJ\n"
                                "[2] LISTAZ\n"
                                "[3] SZERKESZT\n"
                                "[4] TOROL\n"
                                "[5] KERES\n"
                                "[6] EXPORT\n"
                                "");
                            next ? menulevel++ : menulevel--;
                            break;

            case 2:
                switch (next) {
                    case 1: next = menu("\n"
                                   "[1] MANUALISAN BEIR\n"
                                   "[2] VCARD IMPORT\n"
                                   "[3] CSV (adatbazis) IMPORT (mostani adatbazis filehoz iras)\n"
                                   "");
                            next ? menulevel++ : menulevel--;
                            break;
                    case 2: // LIST EVERY ENTRY IN DB IN SHORT FORMAT (NEV, TELSZAM, EMAIL)
                            next = menu(/*db_show_short();*/"list_db\n");
                            next ? menulevel++ : menulevel--;
                            break;
                    case 3: printf("Melyik rekord legyen szerkesztve?\n> ");
                            next = input_shell();
                            next ? menulevel++ : menulevel--;
                            break;
                    case 4: printf("Melyik rekord legyen torolve?\n> ");
                            next = input_shell();
                            next ? menulevel++ : menulevel--;
                            break;
                    case 5: printf("Mi szerint keres?\n");
                            next = menu(""
                                        "[1] NEV\n"
                                        "[2] TELEFONSZAM\n"
                                        "[3] EMAIL\n"
                                        "");
                            next ? menulevel++ : menulevel--;
                            break;
                    case 6: printf("Mi legyen a .vcf file neve?\n> ");
                            //record_export_vcf();
                            printf("<file.vcf> SIKERESEN LETREHOZVA / NEM SIKERULT!\n");
                            next = 0;
                            next ? menulevel++ : menulevel--;
                            break;
                }
                break;

            case 3:
                switch(next) {
                    case 1:
                        //record_soronkentIn();
                        break;
                    case 2:
                        //record_show_all();
                        break;
                    case 3: id = next;
                            printf("A rekord melyik adatát?\n> ");
                            next = input_shell();
                            break;
                    case 4: 
                            id = next;
                            printf("Tenyleg szeretne torolni a %d. rekordot?\n", id);
                            next = menu("[1] IGEN\n[2] NEM\n");
                            break;
                    case 5:


                }
                break;

        }
    }
                       

    return 0;
}

