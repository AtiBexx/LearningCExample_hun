#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");
    char myCharacter = '\n';//baclslash szóköz
    char myCharacter2 = 'n';
    printf("%c szóköz és a CharKarterem: %c" , myCharacter, myCharacter2);
    return 0;
}
