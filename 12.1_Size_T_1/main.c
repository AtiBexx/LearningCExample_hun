#include <stdio.h>
#include <limits.h> // UINT_MAX
#include <stddef.h> // size_t
#include <locale.h>
int main() {
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");

    printf("size_t mérete: %zu bájt\n", sizeof(size_t));
    printf("size_t max értéke: %zu\n", (size_t) -1);
    return 0;
}
/*
 Miért unsigned?
Mert size_t sosem lehet negatív, hiszen nem lehet
egy tömb „-3
 hosszú”, vagy egy „-12 bájt” méretû dolog.
 Ezért elõjel nélküli típus.
 A (size_t)-1 trükk a legnagyobb értéket adja vissza,
  mivel az -1 átalakul az összes bit 1-re, ami a legnagyobb size_t.
*/
