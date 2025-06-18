#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void)
/*
A main() C-ben elvileg azt jelenti, hogy a main
akár paramétereket is kaphat, amit a fordító nem ellenőriz.
**********************************************************
A main(void) szigorúan azt jelenti, hogy a függvény nem fogad
paramétert.
*/
{
    int integerVar=100;
    float floatingVar=331.79;
    double doubleVar=8.44e+11;
    //8.44 × 10¹¹ == 8.44e+11
    char charVar='W';

    _Bool boolVar=0; // 1=true 0=False
    bool boolvar2=true;


    printf("integerVar=%i\n", integerVar);
    printf("floatingVar=%f\n", floatingVar);
    printf("doubleVar=%e\n", doubleVar);
    printf("doubleVar=%g\n", doubleVar);
    printf("charVar=%c\n", charVar);
    printf("boolVar=%i\n\n", boolVar);//csak számot ír ki
    printf("boolVar=%s\n", boolVar? "true" : "false" );
    //ha nem írod a végére a boolVar? "true" : "false"
    //csak számot fog kiírni ha a%i-vel használos
    //a helyes a chrTömb azaz %s
    printf("boolVar2=%s\n", boolvar2? "true" : "false");

       return 0;
}
/*
 _Bool
Ez a _Bool típus C99 szabvány óta be van építve a C nyelvbe,
 tehát külön fejléc (stdbool.h) nélkül is használható.*/
