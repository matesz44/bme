#include <stdio.h>
#include <stdbool.h>

int main(void) {

int sz;
int db = 0;

for (sz = 2; sz <= 1000; sz++) {
    bool van = false;
    int oszt = 2;
    while (oszt < sz && !van) {
        if (sz % oszt == 0)
            van = true;
        oszt++;
    }
    if (!van)
        db++;
}
printf("%d prím.\n", db);
return 0;
}
