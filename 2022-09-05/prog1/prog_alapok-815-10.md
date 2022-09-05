TODO: net.bme.hu laptopon megcsinalni
# Bevezető előadás - Programozás alapjai I.
> Czirkos Zoltán, **Pohl László**, Kohári Zsolt, Nagy Gergely Elektronikus Eszközök Tanszéke
> https://infoc.eet.bme.hu

## Első heti dolgok
https://infoc.eet.bme.hu -> fejlesztokörny telepitese
- kedden ranezni, hol lesz gyakorlat

- 5. emelet wc

wifi: login.bme.hu/admin --> mac address reg

## Tudnivalók
- [infoc](https://infoc.eet.bme.hu) oldal

Konzultacio: kerdesek, nagy hazi stb

### Oktatás: 3 féle óra
- Előadás: most
- Labor: géptermi órák - (önálló munka, programozás) - van jelenlét
- Gyakorlat: kis tantermi - (táblán, papíron, gondolkodtató feladatok) - van jelenlét
- **Lab, gyak átjelentkezés:** első 2 hét fogadó oktató beleegyezésével

## Tudnivalók II.
### Szamonkérések jellege
- reszvetel
- KZH(kis zh): kisebb feladat 20-25 sor prog papiron
- NZH(nagy zh): kb. 4-5x KZH
- NHF(nagy hazi): többmodulos, *egyénileg* írt C program dokumentációval
- Jegy: KZH + NZH + NHF + szorgalmi pontszámokból
- Szorgalmik: jegybe számít, versenyben önkéntes részvétel

### 0. ZH -- !!tantárgyi adatlap, infoc oldal!!
- önkéntes, teljes félév anyagából
- jelenlét és kis ZH-k kiválthatók vele ha jó lesz
- előfeladat, jelentkezés és minta: ***KÖVETELMÉNYEK*** oldal
- egyszeri alkalom, semelyik részének nincs pótlása

---

# Algoritmusok
## Specifikáció(feladatleírás): mit csináljon
- bemenet?
- kimenet?
- ezek közti összefüggés

## Algoritmus(lépések sorozata): hogyan
- megoldás lépésről lépésre leírása
- nekünk kell kitalálni, nincs rá ált módszer

<kép1>

## Pszeudokód: gép szöveges leírása
- megjegyzett számok listája: változók
- elvégzett műveletek: szorz csökk
- lépések sorrendje

## Algoritmus DEF:
> *módszer a feladat megoldására*
- utasítássorozat megengedett lépésekből
- mechanikusan végrehajtható
- véges sok lépésből áll
- mindig egyértelmű a következő lépés
- minden időpontban véges sok memória kell

> (összead, primtényezős felbontás)

# Programok
## Programkódok
- szgép által elérhető

# A PROGRAMOZÁS ALAPJAI
- c99

helloworld.c:
```c
#include <stdio.h>

int main(void) {
    printf("Helló, Világ\n");

    return 0;
}
```

- string nem törhető
- preprocinak szolo utasítás (#include) sem törhető

szamologep.c:
```c
#include <stdio.h>

int main(void) {
    printf("Eredmény: %d.\n", 2*3);

    return 0;
}
```
- %d --> egész számok

## Vátozók és használatuk
- értékadás MINDIG **jobbról balra** történik (x = x+1)

type | ÉK | MŰVELETEK
egész | -1, 2, 5 | + - összehasonlít
valós | 1.5, 7, 3.14 | + - összehasonlít
logikai | igaz, hamis | és, vagy, tagadás
karakter | betűk, írásjelek | összehasonlít, következő, előző
szöveg | karaktersorozatok | összefűzés

### Kifejezések és típusok

kifejezés | érték
1+2 | 3
5+2\*3 | 11
6\*(3+4) | 42

1<2 | igaz
2>=3 | hamis
'a' < 'b' | igaz

3\*(1+ | vége?
1-HAMIS | típus!
1 < X < 5 | típus!

### Változók létrehozása
- statikusan tipusos (létrehozás után nem változtatható meg)
- doublet fogjuk használni ált) --> printf("%f", x); scanf("%lf", &x);
#### definíció (= létrehozás)
int x = 2; (x egész) (inicializálással)
int a, b;
int kerulet, terulet;

#### használat
x = 3;
x = 2+3;
x=x+1;

#### kiírás
int x;
x=2\*3;
printf("Értéke: %d.\n", x); // (x --> érték)

#### beolvasás
int szam;
printf("Mennyi? ");
scanf("%d", &szam); // (&x --> memcim)


## Az imperatív programok működése
- szekvencia: egymás utáni lépések (flowchart)
<kep-folyamatabra>
- elágazás: feltételes végrehajtás (C: if(felt))

- % maradék csak egész számoknál működik
- 0 --> hamis
- nem 0 --> igaz

### Ciklus: működés
> *visszaugrás*
<kep-ciklus>
- több utasítás {} közé kell
