#include <stdio.h>

/* debug
   Code::Blocks-ban:
   - Kurzorral adott sorra
   - F4 megnyom (Debug/Run to cursor)
   - F7 léptetés (Debug/Next line)
   - Debug/Debug windows/Watches -> local variables értékek figyelése
*/
int main(void) {
    int szam = 1;
    while (szam <= 20) {
        printf("%d\n", szam);
        szam++;
    }
    return 0;
}
