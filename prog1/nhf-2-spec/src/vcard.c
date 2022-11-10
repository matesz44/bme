#include "vcard.h"
#include <stdlib.h>
#include <string.h>

char *vcard_convert(DB_t db) {
    if (db.N == NULL)
        return NULL;
    char *s = (char*) malloc(sizeof(DB_t) +200);
    
	strcpy(s, "BEGIN:VCARD\nVERSION:3.0\nN:");
	strcat(s, db.N);
	strcat(s, "\nTITLE:");
	strcat(s, db.TITLE);
	strcat(s, "\nEMAIL;type=INTERNET;type=WORK;type=pref:");
	strcat(s, db.EMAIL);
	strcat(s, "\nTEL;type=WORK;type=pref:");
	strcat(s, db.TEL);
	strcat(s, "\nitem1.ADR;type=WORK:;;");
	strcat(s, db.ADR);
	strcat(s, "\nCATEGORIES:Work,Test group\nEND:VCARD\n");

	return s;
}
