#include <stdio.h>

int main(void) {
    int ora, perc, seb; // 12 45 198
    int tomb[24];

    do {
        scanf("%d %d %d", &ora, &perc, &seb);
        if (seb > 155)
            tomb[ora]++;
    } while (ora != -1 && perc != -1 && seb != -1);

    for (int i = 0; i<24;i++) {
        if (tomb[i] > 0)
            printf("%d:00-%d:59 -> %d db\n", i, i, tomb[i]);
    }
    
    return 0;
}
