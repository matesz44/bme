#include <stdio.h>

typedef struct Test {
    int x,y,z;
} Test;

int main(void) {
    Test t1 = {1,2,3};
    printf("%d-%d-%d\n", t1.x, t1.y, t1.z);
    scanf("%d %d %d", &t1.x, &t1.y, &t1.z);
    printf("%d-%d-%d\n", t1.x, t1.y, t1.z);
    t1 = (Test) {6,7,8};
    printf("%d-%d-%d\n", t1.x, t1.y, t1.z);

    return 0;
}
