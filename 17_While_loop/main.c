#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
    int szam = 1;//literáltuk incializáltuk ezért nem 0-tól 1-tõl kezdi

    while (szam <= 5)//5.sornál leáll
    {
        printf("while ciklus: %d\n", szam);
        szam++;//növeljük egyel
    }

    return 0;
}
