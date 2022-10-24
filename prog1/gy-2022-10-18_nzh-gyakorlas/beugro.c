#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool maganhangzo_e(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void viragnyelv(char *hova, char *mit) {
    int iro = 0;
    for (int olvaso = 0; mit[olvaso] != '\0'; olvaso++) {
            hova[iro] = mit[olvaso];
        if (maganhangzo_e(mit[olvaso])) {
            hova[iro+1] = 'v';
            hova[iro+2] = mit[olvaso];
            iro += 3;
        } else {
            iro++;
        }
    }
}

void viragnyelv2(char *hova, char *mit) {
    while (*mit != '\0') {
            *hova = *mit;
        if (maganhangzo_e(*mit)) {
            *(hova+1) = 'v';
            *(hova+2) = *mit;
            hova += 3;
        } else {
            hova++;
        }
    }
}
int main(void) {
    char *be = "viragnyelv";
    char ki[40];
    viragnyelv2(ki, be);
    printf("%s\n", ki);
    return 0;
}
