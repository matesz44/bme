- pointerek használata (recap) (&, \*)

# A const kulcsszó
- c99
- igérvényt tesz a program

```
void kiir (int const *tomb, int meret) { ... };

int tomb[100] = { ... };
kiir(tomb, 100);


struct Rajz { ... };
void megjelenit(Rajz const *r) { ... };

Rajz r;
megjelenit(&r);
```

- `const` tipus elott v utan is lehet

# Dinamikus memóriakezelés
Mi dönthetjük el:
- {mennyit,mikor} {foglalunk,szabadítjuk fel}

DE mi felelőségünk:
- {foglalás,felszabadítás}

## malloc() és free() fv -- (HEAP-en foglal)
- `<stdlib.h>`

```
void *malloc(size_t méret)
```
> lefoglal egy bájtban megadott méretű memóriaterületet (malloc: memory allocation)

- visszaad egy címeta lefoglalt területre
- mérete: bájt, és **inicializálatlan** (memóriaszemét)
- azért `void*` mert nem ismeri a típusunkat
- ha **NEM sikerül**, akkor `NULL` pointert ad

```
void free(void *ptr)
```
> Felszabadít egy memóriaterületet, amit a `malloc()` foglalt.
- `malloc()` által adott **void pointert** (címet) kell neki megadni

### 1. példa
```
#include <stdio.h>
#include <stdlib.h>

int n;
printf("hány számot? ");
scanf("%d", &n);

double *tomb;
tomb = (double*) malloc(n * sizeof(double));
if (tomb == NULL) {
    printf("Nem sikerült memóriát foglalni\n");
    return false;
}
tomb[3] = 12;

free(tomb);

// felsz után érdemes NULL értéket adni hogy checkelhető legyen h létezik-e
tomb = NULL;
```

### 2. példa
```
char *osszefuz(char const *s1, char const *s2) {
    int mennyi = strlen(s1)+strlen(s2) + 1;

    char *res = (char*) malloc(mennyi * sizeof(char));
    if (res == NULL)
        return NULL;

    strcpy(res, s1);
    strcat(res, s2);
    return res;
}

char *str;
str = osszefuz("alma", "fa");
printf("%s", str);
free(str);
```

## FONTOS
- ahány malloc annyi free
- a malloc által adott voidptr-t tartsuk meg mert különben nem tudunk semmit se kezdeni vele
- {1:malloc,2:free} {1:előtt,2:után} nem indexelhető a tömb (`char *szoveg; szoveg[2] = 'x'; VAGY free(szoveg); szoveg[2] = 'x';`)

## A DinamikusTömb
Tartsuk nyílván mekkora a lefoglalt terület!
```
typedef struct DinTomb {
    double *adat;
    int meret;
} DinTomb;

DinTomb dt;
dintomb_foglal(&dt, 100);   //inicializálás
dt.adat[34] = 19;           // használat
dintomb_kiir(&dt);
dintomb_atmeretez(&dt, 200);

dintomb_felszabadit(&dt);   // felszabadít
```

függvények:
```
bool dintomb_foglal(DinTomb *dt, int meret) {
    dt->meret = meret;
    dt->adat = (double*) malloc(meret * sizeof(double));
    return dt->adat != NULL;
}

void dintomb_kiir(DinTomb const *dt) {
    for (int i = 0; i < dt->meret; i++)
        printf("%g ", dt->adat[i]);
    printf("\n");
}

void dintomb_felszabadit(DinTomb *dt) {
    free(dt->adat);
    // optional:
    dt->adat = NULL;
    dt->meret = 0;
}
```

átméretezés:
```
bool dintomb_atmeretez(DinTomb *dt, int ujmeret) {
    double *ujadat = (double*) malloc(ujmeret * sizeof(double));
    if (ujadat == NULL)
        return false;

    int min = ujmeret < dt->meret ? ujmeret : dt->meret;
    
    for (int i = 0; i < min; i++)
        ujadat[i] = dt->adat[i];
    
    free(dt->adat);
    dt->adat = ujadat;
    dt->meret = ujmeret;
    return true;
}
```

## calloc(), realloc()

```
void *calloc(size_t darabszám, size_t egyelem);
```
- lefoglal egy tömböt és kitölti 0 bájtokkal
- pl: `int *tomb = (int*) calloc(100, sizeof(int));`

```
void *realloc(void *ptr, size_t méret)
```
- újrafoglalja, átméretezi a ptr által mutatott dinamikus tömböt

# A három memóriaterület
Globális (data segment):
- globális változók, const stringek egy progiban(hello world)

Verem (stack segment):
- fv változói (kivéve ha `static`: megőrzi az értékét 2 fv hívás között mert Globális-ként jön létre, de csak az adott fv fogja látni)

Kupac (heap segment):
- dinamikusan foglalt memóriaterület (heap, free store)

