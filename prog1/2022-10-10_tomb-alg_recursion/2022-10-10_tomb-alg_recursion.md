# -- PROG1 -- EA -- 2022.10.10 -- Tömbök algoritmusai, rekurzió --

# Basic algoritmusok

## Van-e? - Eldöntés
- ne menjünk végig az elemeken, hanem amint eldől h van menjünk tovább a programban

## Hol van? - lineáris keresés
- indexekkel dolgozunk
- **n/2 művelet** (egyenes arányos) (1M -> 500k)

## Bináris keresés - okosabb
Ha ***rendezett*** a tömb:
- `==` - keressük
- `<` - előrébb kell legyen
- `>` hátrébb kell legyen

*--felezgetéses keresés--*

- **log2n művelet** (1M -> 20)

```
int bink(double *t, int db, double mit) {
    int min = 0;
    max = db-1;
    int kozep = (min+max)/2;

    while (min <= max && t[kozep] != mit) {
        if (t[kozep] < mit)
            min = kozep+1;
        else
            max = kozep -1;

        kozep = (min+max) / 2
    }

    return min <= max ? kozep : -1;
}
```

- - -

# TODO
- kodokat infoc-ről becopypastelni az egyes algokhoz!

- - -

# Rendezések

## Helyben rendezés
(Csak a meglevő tömböt használhatjuk, + 1-1 temp változó)

Rendezett tömb:
- Növekvő sorrend: szomszédos elemekre `ŧ[i] <= t[i+1]`
- Tranzitív tulajdonság: ha A <= B és B <= C akkor A <= C

A rendezések működése:
- Nincs segédtömb, a meglévőben dolgozunk
- Genericitás: az algoritmusok általánosak (sorrend, típus)

### Buborékrendezés (bubble sort)
- egymás melletti elemek összehasonlítása és cseréje
- egyszerre 1 elem --> SHIET

- 3-as cserénél ne legyen ptr a segédváltozó

### Közvetlen kiválasztás (selection sort)
- 1. elemet a többivel (megkeresi a résztömb legkisebb elemét és az elejére rakja)
- minden ciklusban az elejéről elhagyjuk a rendezett elemeket

## Rendezések hatékonysága - cserék száma

```
                        | összehasonlítás            | csere
rendezés                | max    | átlag    | min    | max      | átlag  | min
javított buborék        | n^2    | n^2      | n      | n^2      | n^2    | 0
közvetlen kiválasztás   | n^2    | n^2      | n^2    | n        | n      | 0
gyorsrendezés (std fv)  | n^2    | n*logn   | n*logn | n^2      | n*logn | 0
kupacrendezés           | n*logn | n*logn   | n*logn | n*logn   | n*logn | n*logn
```

### Indexelő tömbök és használatuk
Ötlet: egy indexelő tömböt rendezzük ne az eredetit
- csak az indexelő tömb értékei keverednek meg
- nagyon sok időt lehet spórolni
- több szempont szerinti rendezettség fenntartható több indexelő tömbbel (nevsorindex, szuletesindex, etc)

```
Ember nevsor[100];
int index[100];
printf("%s", nevsor[index[3]].nev);
```

### Keritörpe rendezés (gnome sort)
- Ha egymás mellettiek rossz sorrendbe csere és elindulunk visszafele ha jó lépünk előre 1-et


# Rekurzió
- stack
- fv-ből fv hívás

Faktoriális rekurzióval:
```
int fakt(int n) {
    if (n == 1)
        return 1;
    else
        return n * fakt(i-1);
}
```

- [fakt.c](fakt.c)

- fakt4 --> fakt3 --> fakt2 --> fakt1
- 24    <-- 6     <-- 2     <-- 1 <-/

- leállási feltétel kell, hogy legyen, különben nem rekurzió
- minden lépésben közeledni kell a báziskritériumhoz


```
int fib(int n) {
    if (n < 2)
        return n;
    else
        return fib(n-2) + fib(n-1);
```
- lineárisan optimálisabb megoldani

## Hanoi tornyai játék
- rakjunk félre n-1 korongot (rekurzió) --> alsó korong mozgatható

top-down tervezés - ZH!

Megoldásvázlat:
```
void hanoi_vazlat(int n, char honnan, char seged, char hova) {
    varazslat(n-1, honnan, hova, seged);
    printf("rakj 1-et: %c->%c\n", honnan, hova);
    varazslat(n-1, seged, honnan, hova);
}
```

```
void hanoi(int n, char honnan, char seged, char hova) {
    if (n == 0)
        return;
    hanoi(n-1, honnan, hova, seged);
    printf("rakj 1-et: %c->%c\n", honnan, hova);
    hanoi(n-1, seged, honnan, hova);
}

int main(void) {
    hanoi(4, 'A', 'B', 'C');

    return 0;
}
```

### Összefésülő rendezés - összefésülés
- 2 rendezett tömb számait tesszük egy 3. tömbbe
- lényeg: mindig az elsők közül a kisebbet vesszük, amíg el nem fogynak

```
void ossszefesul(int *t1, int n1, int *t2, int n2, int *cel) {
    int i = 0;
    int j = 0;

    for (int c = 0; c < n1+n2; c++) {
        if (i < n1 && (j >= n2 || t1[i] <= t2[j])) {
            ...
```
- (infoc-n)

rendezetlen tömbbel:
- rendezzük a tömb első felét, másodikat, aztán fésüljük ezeket egy rendezett tömbbé

`merge_sort.c`:
```c
void rendez(int *tomb, int eleje, int vege, int *seged) {
    if (vege - eleje < 2)
        return;
    int kozepe = (eleje + vege) / 2;
    rendez(tomb, eleje, kozepe, seged);
    rendez(tomb, kozepe, vege, seged);
    ossszefesul(tomb, eleje, kozepe, vege, seged);
    masol(seged, eleje, vege, tomb);
}

void ossszefesul(int *be, int eleje, int kozepe, int vege, int *ki) {
    int i = eleje, int j = kozepe;
    for (int c = eleje; c < vege; ++c) {
        if (i < kozepe && (j >= vege || be[i] <= be[j])) {
            ki[c] = be[i];
            i++;
        } else {
            ki[c] = be[j];
            j++;
        }
    }
}

void masol(int *be, int eleje, int vege, int *ki) {
    for (int c = eleje; c < vege; ++c)
        ki[c] = be[c];
}


int main(void) {
    int szamok[10] = { ... };
    int segedt[10];
    rendez(szamok, 0, 10, segedt);
    for (int i = 0; i < 10; ++i)
        printf("%d ", szamok[i]);

