#include <stdio.h>

void szor2(int);
void szor2p(int*);

int main(void) {
    /*
    double d1 = 3.14;
    double *p1, *p2;
    p1 = &d1; // *p1 == 3.14
    p2 = NULL; //null
    */
    int i1 = 2;
    int *p1 = NULL;
    int *p2 = NULL;
    printf("Hova mutat p1 es p2?\n");

    p1 = &i1;
    printf("&i1 = %p, p1 = %p\n", &i1, p1);
    printf("i1 = %d, *p1 = %d\n", i1, *p1);

    i1 = 3;
    printf("*p1 = %d\n", *p1);
    *p1 = 4;
    printf("i1 = %d\n", i1);

    p2 = p1;
    *p2 = 5;
    printf("i1 = %d, p2 = %p\n", i1, p2);
    printf("---\n");

    szor2(i1);
    printf("main()... i1 = %d - de miert?\n", i1);
    printf("---\n");

    szor2p(&i1);
    printf("main()... i1 = %d - miert?\n", i1);
    printf("---\n");

    szor2p(p2);
    printf("main()... i1 = %d - miert?\n", i1);
    printf("main()... p2 = %p - miert?\n", p2);

    return 0;
}

void szor2(int i2) {
    i2 *= 2;
    printf("szor2()... i2 = %d\n", i2);
}
void szor2p(int *p3) {
    *p3 *= 2;
    printf("szor2p()... *p3 = %d\n", *p3);
    p3 = NULL;
    printf("szor2p()... p3 = %p\n", p3);
}

