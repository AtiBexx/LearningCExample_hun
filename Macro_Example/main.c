#include <stdio.h>
#include <stdlib.h>//system függvényekhez
#include <locale.h> //területi beállításhoz setlocale
#define PI 3.14159
/***********************
#define NÉV érték vagy kifejezés
#define FÜGGVÉNY_MAKRÓ(paraméterek) kifejezés
****************************************
#define MAX(a, b) ((a) > (b) ? (a) : (b))
************************/
//*************


int main()
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, ""); //Területi beállítás Linuxon is müködik
    double r = 5.0;
    double terulet = PI *r *r;
    printf("A kör területe: %f\n", terulet);

    return 0;
}
