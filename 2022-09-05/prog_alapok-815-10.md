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
