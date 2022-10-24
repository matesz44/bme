#include <stdio.h>

typedef struct Ido {
    int ora, perc, mp;
} Ido;

Ido idopont_ertelmez(char *str) {
    int ora, perc, mp;
    char ampm;

    if (sscanf(str, "%d:%d:%d", &ora, &perc, &mp) == 3)
        return (Ido){.ora = ora, .perc = perc, .mp = mp};

    if (sscanf(str, "%dh %dm %ds", &ora, &perc, &mp) == 3)
        return (Ido){.ora = ora, .perc = perc, .mp = mp};

    if (sscanf(str, "%d:%d %c", &ora, &perc, &ampm) == 3) {
        if (ampm == 'P')
            ora += 12;
        return (Ido){.ora = ora, .perc = perc, .mp = 0};
    }

    return (Ido){.ora = 0, .perc = 0, .mp = 0};
}

int main(void) {
    char *elso = "23:17:06";
    char *masodik = "15h 09m 53s";
    char *harmadik = "08:00 AM";

    Ido ido;
    ido = idopont_ertelmez(elso);
    printf("%s\n", ido.ora == 23 && ido.perc == 17 && ido.mp == 6 ? "Helyes" : "Helytelen");
    ido = idopont_ertelmez(masodik);
    printf("%s\n", ido.ora == 15 && ido.perc == 9 && ido.mp == 53 ? "Helyes" : "Helytelen");
    ido = idopont_ertelmez(harmadik);
    printf("%s\n", ido.ora == 8 && ido.perc == 0 && ido.mp == 0 ? "Helyes" : "Helytelen");
    
    return 0;
}
