#include <stdio.h>
#include <stdbool.h>

// tulindexelesnel memoriaszemetet ir ki

int main(void) {
    int tomb[10];

    for (int i = 0; i < 10; i++)
        tomb[i] = i * 10;

    int i = 0;
    //while (i < 20) {
    while (true) { // végtelen ciklus, 10. elem után memóriaszemét ; segfaultolhat
        printf("%d. elem: %d\n", i, tomb[i]);
        i++;
    }

    return 0;
}
