#include <stdio.h>
#include <stdlib.h>//system f�ggv�nyekhez
#include <locale.h> //ter�leti be�ll�t�shoz setlocale
#define PI 3.14159
/***********************
#define N�V �rt�k vagy kifejez�s
#define F�GGV�NY_MAKR�(param�terek) kifejez�s
****************************************
#define MAX(a, b) ((a) > (b) ? (a) : (b))
************************/
//*************


int main()
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, ""); //Ter�leti be�ll�t�s Linuxon is m�k�dik
    double r = 5.0;
    double terulet = PI *r *r;
    printf("A k�r ter�lete: %f\n", terulet);

    return 0;
}
