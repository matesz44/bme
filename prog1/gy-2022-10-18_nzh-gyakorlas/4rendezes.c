#include <stdio.h>


//beugro
void cserel(double *a, double *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

int legkisebb(double *tomb, int eleje, int vege) {
    int minIndex = 0;

    for (int i = eleje+1; i <= vege; i++) {
        if (tomb[i] < tomb[minIndex])
            minIndex = i;
    }
    return minIndex;
}

// 3, 1, 2, 5, 6, 0
// 0, 1, 2, 5, 6, 3
// 1, 2, 5, 6, 3
// 1, 2, 5, 6, 3
// 2, 5, 6, 3
// 2, 5, 6, 3
// 5, 6, 3
// 3, 6, 5
// 6, 5
// 5, 6
// 0, 1, 2, 3, 5, 6
void rendez(double *tomb, int meret) {
    int eleje = 0;
    int vege = meret-1;
    while (eleje != vege) {
        int minIndex = legkisebb(tomb, eleje, vege);
        cserel(tomb+0, tomb+minIndex);
        eleje++;
    }
}

int main(void) {
    double tomb[5] = {3, 47, 12, 1, 57};

    rendez(tomb, 5);
    for (int i = 0; i < 5; i++)
        printf("%d: %g\n", i, tomb[i]);
    return 0;
}
