// https://rextester.com/WYOC74946
#include <iostream>

using namespace std;


const string szoveg ="ABXYZ";
const char shift ='C';

// ABCD A --> ABCD
// ABCDE B --> BCDEF
// BYZ B --> CZA
// ABXYZ C --> CDZAB
// (..Z--->ABC...Z--->ABC...)

int main(void) {
    int n=0;
    char ret;
    while (n<szoveg.length()) {
        ret = toupper(szoveg[n])+toupper(shift)-65;
        if (ret>90) {
            ret-=26;
        };
        cout << ret;
        n++;
    }
    cout << endl;

    return 0;
}
