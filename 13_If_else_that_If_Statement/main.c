#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_to_test, remainder;
    printf("Enter yout number to be tested: ");
    scanf ("%i", &number_to_test);

    remainder = number_to_test % 2;//modulus % és a 2 utána /2 azaz osztva 2 vel
    // A számot elosztjuk 2-vel, és eltesszük a maradékot (modulus operátor)

    //így is jó zárojelek nélkül
    /*if (remainder ==0 )
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");
    */
    if (remainder ==0 ) //és így is jó zárojelekel
    {
        printf("The number is even.\n");//a szám páros
    }else{
        printf("The number is odd.\n");//a szám páratlan
    }
    return 0;
}
/*
Ha number_to_test = 7, akkor:

7 / 2 = 3, maradék 1 → remainder = 1

Ezért: „The number is odd.”

Ha number_to_test = 8, akkor:

8 / 2 = 4, maradék 0 → remainder = 0

Ezért: „The number is even.”*/
