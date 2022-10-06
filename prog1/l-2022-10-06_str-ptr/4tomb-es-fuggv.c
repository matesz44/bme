#include <stdio.h>

//int tombkeres(int*, int, int);
int* tombkeres(int*, int, int);

int main(void) {
    int t[5] = {1, 2, 3, 4, 5};
    //int index = tombkeres(t, 5, 4);
    int* keresett = tombkeres(t, 5, 4);

    for (int i = 0; i < 5; i++)
        printf("index: %d --> %d\n", i, t[i]);
    
    //if (index != -1)
    if (keresett != NULL)
        //printf("Index: %d\n", index);
        printf("Index: %d\n", keresett - t);
    else
        printf("nincs talalat\n");

    return 0;
}

/*
int tombkeres(int *tomb, int meret, int keresendo) {
    for (int i = 0; i < meret; i++) {
        if (tomb[i] == keresendo)
            return i;
    }
    return -1;
}
*/

/*
int* tombkeres(int *tomb, int meret, int keresendo) {
    for (int i = 0; i < meret; i++) {
        if (tomb[i] == keresendo)
            return &tomb[i];
    }
    return NULL;
}
*/

int* tombkeres(int *tomb, int meret, int keresendo) {
    for (int i = 0; i < meret; i++) {
        if (*tomb == keresendo)
            return tomb;
        tomb++;
    }
    return NULL;
}
