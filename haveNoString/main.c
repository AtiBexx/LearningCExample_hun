#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");
    //mivel a c-ben nincs String valtozo ezért
    char kiIras [] = "Cool";

    printf("Hello minden %s ", kiIras);
    /********** %s a char [] kiírására *********
    */
    return 0;
}
