#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");
    //mivel a c-ben nincs String valtozo ez�rt
    char kiIras [] = "Cool";

    printf("Hello minden %s ", kiIras);
    /********** %s a char [] ki�r�s�ra *********
    */
    return 0;
}
