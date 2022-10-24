# -- Villalap -- EA -- 2022.10.12 --
> periodikus szinuszos jelek, transzformátor

> amplitúdó, csúcstól csúcsig érték, fázishelyzet, freqvencia, periódusidő, jellemző jelalakok
> komplex számok, komplex csúcsértékek
> Impedancia: ellenállás, kondenzátor, tekercs, 

# Periodikus jelek
- Periódusidő: 2 {fel,le}futó jel között eltelt idő
- Periodicitás

## szinuszos jelek
- Csúcsérték: Up(+-) -- amplitúdó
- Csúcstól-csúcsig érték: Up(felső), -Up(alsó)
- Effektív érték: Ueff = U 
    - D(Effektív érték): Az a DC érték, mely időegység alatt ugyanakkora enerigamennyiséget jelent ugyanazon az ellenálláson(fogyasztón), mintha a periodikus jellel tápláltuk volna
    - Feszültség időfüggv négyzetének görbe alatti területének 1 periódusra vett átlagának négyzetgyöke
- Ueff = Up / sqrt(2) = (Upp/2) / sqrt(2)
- Konnektorban: +-325V (sqrt(2) * 230V) --> Ennek effektív értéke: 230V ; T = 1/f = 1 / 50 Hz = 20ms

3 fázis: 400V-os kisfeszültségű hálózat (400V --> vonali fesz)
- 120°-os fázisszögek
- fekete, kék, szürke, barna, zöld-sárga(villanyóra alatti földelés)

# Komplex számok
- sqrt(-1) = i = j
- x = 3+4j - descartes
- |x| = sqrt(3^2 + 4^2) = sqrt(9+16) = 5

Polárkoordináta rszben(exponenciális alak):
- arc(x) = (fí) = arctg(4/3) = 53°
- `5 * e^(j*53°)` = 3 + 4j
- |x| * e ^j(fí)

```
Re{x} = 3 = 5 * cos(53°) = 3
Im{x} = 4 = 5 * sin(53°) = 4
x = Re{x} + j * Im {x}
```

alapműveletek: (x = 3 + 4j ; y = -2 + 3j)
```
x + y = (3-2) + j * (4+3) = 1+j7
x - y = (3-(-2)) + j * (4-3) = 5+j
x * y = (3+4j) * (-2+3j) = 3*(-2) + 3*3j + 4j*(-2) + 4j*3j =
= -6 + 9j + (-8)j + 12j^2 =
= (-6-12) + j(-9-8) = -18 + 1j
```

Osztás:
```
x / y = (3 + 4j) / (-2 + 3j) = (3 + 4j) / (-2 + 3j) * (-2-3j) / (-2-3j) =
= ((3 + 4j) * (-2-3j) ) / ( (-2 + 3j) * (-2-3j) ) =
= -6-9j-8j+12 / 4+6j-6j+9 = 6-17j / 13 =
= 6/13 - (17/13)j
```

- - -
```
x = (3+4j) = 5*ej^53°
y = -2+3j = sqrt{ (-2)^2 + 3^2 } * e^{j(180°-arctg(3/2))} = sqrt{13} * e^j123.7°
```

Hatványozás:
```
sqrt{13}{x^8} = sqrt{13}{ (3+4j)^8 } = (3+4j)^{8/13} = (5*e^j53°)^{8/13} =
= 5^{8/13} * (e^j53°)^{8/13} = 5^{8/13} * (e^j(8/13)*53°) = 2.7 * e^j32.7° = 2.27 + j1.46
```

Komplexcsúcsérték:
```
U_R = sqrt{2} * 230V * cos(2(pi)*50Hz * t + 0°)     <-- U_R = sqrt{2} * 230V * e^j0°
U_S = sqrt{2} * 230V * cos(2(pi)*50Hz * t + 120°)   <-- U_S = sqrt{2} * 230V * e^j120°
U_T = sqrt{2} * 230V * cos((omega) * t + 240°)      <-- U_T = sqrt{2} * 230V * e^j240°
```

Alap passzív áramköri elemek:
- `U_R = R * I_R` (nagy {U,I} => DC)
- szinuszos: `uR = R * i*R` (Ohm tv.)
    - `iR(t) = iR * cos((omega)t + (fí))` időjel, csúcsérték, fí=kezdőfázis

- `UL = L * (diL / dt)` szinuszos: `UL = j(omega)L * iL` --> látszólagos ellenállás: ***ZL = j(omega)L*** => **impedancia**
- `L = v^2 (mű)0*(mű)r * (A/l)`

- `1 / TC = E0 * Er * A/d`, `ic = C * (duc / dt) <--> ic = C*j(omega)*Uc -> Uc = (1 / j(omega)C) * ic`
- `Zc = 1 / j(omega)C`

RLC(rezgőkör) alfrekvencia függvényében:

- 
