#include <stdio.h>

int main() {
    int szam = 10;
    int *mutato = &szam;   // mutato most a szam címét tárolja

    printf("A szam erteke: %d\n", szam);         // 10
    printf("A mutato altal mutatott ertek: %d\n", *mutato);  // *mutato = 10

    *mutato = 20;  // szam értékét módosítjuk a mutatón keresztül

    printf("A szam uj erteke: %d\n", szam);  // 20
    return 0;
}
