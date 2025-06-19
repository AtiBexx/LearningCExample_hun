#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //területi beállításhoz setlocale

int main()
{
    system("chcp 1250 > nul");//windowson müködik ékezetekhez
    setlocale(LC_ALL, ""); //Területi beállítás Linuxon is müködik ékezetekhez
    //deklaráljuk és literáljuk a változókat
    //literáljuk értéket adunk neki
    int minutesEntered = 0;
    double years = 0.0;//évek
    double days = 0.0;//napok
    double minutesInYear = 0;//percek egy évben
    // get input from user
    //bekérjük az adatokat
    printf("Please enter the number of minutes: ");
    //elmentjük a bekért adatott
    scanf("%d", &minutesEntered);

    minutesInYear = (60 * 24 *365);

    years = (minutesEntered / minutesInYear);
    days = ((minutesEntered / 60.0) / 24);

    printf("%d minutes in approximately %f years and %f days: \n",minutesEntered, years , days );
    //most magyarul 2 tízedesig %.2f
    printf("%d perc körülbelül %.2f évnek és %.2f napnak felel meg.\n", minutesEntered, years, days);

    return 0;
}
