#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");
    char myCharacter = '\n';//baclslash sz�k�z
    char myCharacter2 = 'n';
    printf("%c sz�k�z �s a CharKarterem: %c" , myCharacter, myCharacter2);
    return 0;
}
