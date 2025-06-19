#include <stdio.h>
#include <limits.h> // UINT_MAX
#include <stddef.h> // size_t
#include <locale.h>
int main() {
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");

    printf("size_t m�rete: %zu b�jt\n", sizeof(size_t));
    printf("size_t max �rt�ke: %zu\n", (size_t) -1);
    return 0;
}
/*
 Mi�rt unsigned?
Mert size_t sosem lehet negat�v, hiszen nem lehet
egy t�mb �-3
 hossz��, vagy egy �-12 b�jt� m�ret� dolog.
 Ez�rt el�jel n�lk�li t�pus.
 A (size_t)-1 tr�kk a legnagyobb �rt�ket adja vissza,
  mivel az -1 �talakul az �sszes bit 1-re, ami a legnagyobb size_t.
*/
