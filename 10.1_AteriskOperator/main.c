#include <stdio.h>

int main() {
    int szam = 10;
    int *mutato = &szam;   // mutato most a szam c�m�t t�rolja

    printf("A szam erteke: %d\n", szam);         // 10
    printf("A mutato altal mutatott ertek: %d\n", *mutato);  // *mutato = 10

    *mutato = 20;  // szam �rt�k�t m�dos�tjuk a mutat�n kereszt�l

    printf("A szam uj erteke: %d\n", szam);  // 20
    return 0;
}
