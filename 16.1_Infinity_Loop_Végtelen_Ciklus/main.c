#include <stdio.h>
#include <stdlib.h>//system f�ggv�nyekhez
#include <locale.h> //ter�leti be�ll�t�shoz setlocale

int main()
{
    system("chcp 1250 > nul");//windowson m�k�dik �kezetekhez
    setlocale(LC_ALL, "");
    for (;;)
    {
        printf("Ez egy v�gtelen ciklus!\n");
    }

    return 0; // Ez a sor sosem fog lefutni
}
