# Bináris-Decimális Konverzió Útmutató

## Példa: 10011100 bináris szám konverziója

### 1. A konverziós táblázat

| Helyiérték | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
|------------|-----|----|----|----|----|----|----|---|
| **Bináris bit** | **1** | **0** | **0** | **1** | **1** | **1** | **0** | **0** |
| **Számítás** | 1×128 | 0×64 | 0×32 | 1×16 | 1×8 | 1×4 | 0×2 | 0×1 |
| **Eredmény** | 128 | 0 | 0 | 16 | 8 | 4 | 0 | 0 |

### 2. Az összegzés
```
128 + 0 + 0 + 16 + 8 + 4 + 0 + 0 = 156
```

**Válasz: 156**

---

## Hogyan működik a bináris-decimális konverzió?

### Alapelv
A bináris számrendszer 2-es alapú, ahol minden helyiérték a 2 hatványai:
- 2⁰ = 1
- 2¹ = 2  
- 2² = 4
- 2³ = 8
- 2⁴ = 16
- 2⁵ = 32
- 2⁶ = 64
- 2⁷ = 128

### Lépések
1. **Helyiértékek meghatározása**: Jobbról balra haladva minden pozíció a 2 következő hatványa
2. **Bitek ellenőrzése**: Ha a bit 1, akkor azt a helyiértéket hozzáadjuk; ha 0, akkor nem
3. **Összegzés**: Az összes "1" bithez tartozó helyiérték összege adja a decimális eredményt

### Gyakorlati tippek
- Mindig jobbról (legkisebb helyiérték) kezdd
- Csak az "1" bitekkel számolj
- Ellenőrizd az eredményt: 156 ÷ 2 = 78, 78 ÷ 2 = 39, stb.

### További példák

| Bináris | Számítás | Decimális |
|---------|----------|-----------|
| 1010 | 1×8 + 0×4 + 1×2 + 0×1 | 10 |
| 1111 | 1×8 + 1×4 + 1×2 + 1×1 | 15 |
| 11000011 | 1×128 + 1×64 + 0×32 + 0×16 + 0×8 + 0×4 + 1×2 + 1×1 | 195 |

---

## Bitwise Operátorok (Bitenkénti Műveletek)

### 1. AND operátor (&)
**Funkció**: Csak akkor ad 1-et, ha mindkét bit 1
**Használat**: Bitek kikapcsolására, maszkolásra

| A | B | A & B |
|---|---|-------|
| 0 | 0 |   0   |
| 0 | 1 |   0   |
| 1 | 0 |   0   |
| 1 | 1 |   1   |

**Példa**:
```
  1010 (10)
& 1100 (12)
  ----
  1000 (8)
```

### 2. OR operátor (|)
**Funkció**: 1-et ad, ha legalább az egyik bit 1
**Használat**: Bitek bekapcsolására

| A | B | A \| B |
|---|---|--------|
| 0 | 0 |   0    |
| 0 | 1 |   1    |
| 1 | 0 |   1    |
| 1 | 1 |   1    |

**Példa**:
```
  1010 (10)
| 1100 (12)
  ----
  1110 (14)
```

### 3. XOR operátor (^)
**Funkció**: 1-et ad, ha a bitek különbözőek
**Használat**: Bitek átváltására, titkosításra

| A | B | A ^ B |
|---|---|-------|
| 0 | 0 |   0   |
| 0 | 1 |   1   |
| 1 | 0 |   1   |
| 1 | 1 |   0   |

**Példa**:
```
  1010 (10)
^ 1100 (12)
  ----
  0110 (6)
```

### 4. NOT operátor (~)
**Funkció**: Minden bitet megfordít (0→1, 1→0)
**Használat**: Bitek invertálására

**Példa**:
```
~1010 = 0101 (32 bites rendszerben: 11111111111111111111111111110101)
```

### 5. Balra léptetés (<<)
**Funkció**: Biteket balra tolja, jobbról nullákkal tölt fel
**Használat**: Szorzás 2 hatványaival

**Példa**:
```
1010 << 2 = 101000
(10 << 2 = 40, ami 10 × 4)
```

### 6. Jobbra léptetés (>>)
**Funkció**: Biteket jobbra tolja
**Használat**: Osztás 2 hatványaival

**Példa**:
```
1010 >> 1 = 101
(10 >> 1 = 5, ami 10 ÷ 2)
```

---

## Részletes Számítási Útmutató

### Manuális számítás lépései:

#### 1. AND műveletnél (&):
```
Lépés 1: Írd fel a számokat binárisban
    1010 (A)
    1100 (B)

Lépés 2: Minden pozícióban nézd meg mindkét bitet
Pozíció 0: 0 & 0 = 0
Pozíció 1: 1 & 0 = 0  
Pozíció 2: 0 & 1 = 0
Pozíció 3: 1 & 1 = 1

Lépés 3: Írd össze az eredményt: 1000
```

#### 2. Léptetéseknél:
```
Balra léptetés (<<):
1010 << 2 jelentése:
- Vedd a 1010 bináris számot
- Told el 2 pozícióval balra: 101000
- Jobbról töltsd fel nullákkal

Jobbra léptetés (>>):
1010 >> 1 jelentése:
- Vedd a 1010 bináris számot  
- Told el 1 pozícióval jobbra: 101
- Balról töltsd fel nullákkal (vagy előjel bittel)
```

---

## Programozási Példák

### C/C++:
```c
int a = 10;    // 1010 binárisban
int b = 12;    // 1100 binárisban

int and_result = a & b;    // 8  (1000)
int or_result = a | b;     // 14 (1110)
int xor_result = a ^ b;    // 6  (0110)
int not_result = ~a;       // -11 (kettes komplemens)
int left_shift = a << 2;   // 40 (101000)
int right_shift = a >> 1;  // 5  (101)
```

### Python:
```python
a = 10    # 1010 binárisban
b = 12    # 1100 binárisban

and_result = a & b    # 8
or_result = a | b     # 14
xor_result = a ^ b    # 6
not_result = ~a       # -11
left_shift = a << 2   # 40
right_shift = a >> 1  # 5

# Bináris megjelenítés
print(bin(a))         # 0b1010
print(bin(and_result)) # 0b1000
```

### Java:
```java
int a = 10;    // 1010
int b = 12;    // 1100

int andResult = a & b;    // 8
int orResult = a | b;     // 14
int xorResult = a ^ b;    // 6
int notResult = ~a;       // -11
int leftShift = a << 2;   // 40
int rightShift = a >> 1;  // 5

// Bináris string-ként
String binary = Integer.toBinaryString(a); // "1010"
```

---

## Gyakorlati Alkalmazások

### 1. Bit maszkolás (AND-dal):
```c
// Csak a 4. bit ellenőrzése (0-tól indexelve)
int number = 25;      // 11001
int mask = 16;        // 10000 (2^4)
if (number & mask) {
    printf("A 4. bit be van állítva\n");
}
```

### 2. Bit beállítása (OR-ral):
```c
// A 2. bit beállítása
int number = 9;       // 1001
number = number | 4;  // 1001 | 0100 = 1101 (13)
```

### 3. Bit átváltása (XOR-ral):
```c
// A 1. bit átváltása
int number = 9;       // 1001
number = number ^ 2;  // 1001 ^ 0010 = 1011 (11)
```

### 4. Gyors szorzás/osztás:
```c
int number = 10;
int doubled = number << 1;    // 20 (× 2)
int quadrupled = number << 2; // 40 (× 4)
int halved = number >> 1;     // 5  (÷ 2)
```