#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
    int szam = 1;//liter�ltuk incializ�ltuk ez�rt nem 0-t�l 1-t�l kezdi

    while (szam <= 5)//5.sorn�l le�ll
    {
        printf("while ciklus: %d\n", szam);
        szam++;//n�velj�k egyel
    }

    return 0;
}
