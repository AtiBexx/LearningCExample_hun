#include <stdio.h>
#include <stdlib.h>//system függvényekhez
#include <locale.h> //területi beállításhoz setlocale

int main()
{
    system("chcp 1250 > nul");//windowson müködik ékezetekhez
    setlocale(LC_ALL, "");
    for (;;)
    {
        printf("Ez egy végtelen ciklus!\n");
    }

    return 0; // Ez a sor sosem fog lefutni
}
