# -- EA -- Operátorok, Számábrázolás -- 2022.10.17 --

- operátor precedencia

## Polimorfizmus (többalakúság) és konverziók
- a/b osztás. a,b int --> egész osztás, LEFELE kerekít
- ha bármelyik lebegőpontos --> lebegőpontos osztás

- kézi konverzió (cast): ha ként int van, de pontos eredmény kell:
- `(double)x`

# Érték és mellékhatás
```c
int db = 0;
for (int i = 0; szamok[i] != -1; i += 1) {
    db += printf("%d, ", szamok[i]); /* ! */
    if (db > 15) {
        printf("\n");
        db = 0;
    }
}
```
- mellékhatás: megjelenik a consolon a kiirt karakterek szama

pl: (érték és mellékhatás):
- `x + y`: Érték: az összeg ; 		Mellékhatás: nincs
- `x = y`: Érték: a másolt szám ; 	Mellékhatás: x megváltozik

Fontos: logikai operátornál minden mellékhatás lezajlik
- helytelen: `a = a++;`
- helyes: `while (scanf("%c", &c) == 1 && c != '\n')`

# A ?: operátor (3 operandusú = ternary operator)
> `feltétel ? igaz_kif : hamis_kif`
- ahol ugyanarra a változóra van értékadás

# Rövidzár tulajdonság: &&, ||, ?:
```
if (b != 0 && a/b > 3) ...
if (i < meret && tomb[i] > 0) ...
```
- a && után csak akkor értékelődik ki, ha az && előtti igaz

# Számítógép, számábrázolás, számrendszerek

