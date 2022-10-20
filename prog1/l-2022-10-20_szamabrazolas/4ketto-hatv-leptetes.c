#include <stdio.h>

int main(void) {
    int a = 1;
    for (int i = 0; i <= 40; i++) {
        printf("2^%d = %d\n", i, a);
        a = a << 1; // bitshift --> 31-nel overflow sima intnel, long int lazan elbirja a 40-et
    }
    return 0;
}
