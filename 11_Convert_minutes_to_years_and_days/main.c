#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //ter�leti be�ll�t�shoz setlocale

int main()
{
    system("chcp 1250 > nul");//windowson m�k�dik �kezetekhez
    setlocale(LC_ALL, ""); //Ter�leti be�ll�t�s Linuxon is m�k�dik �kezetekhez
    //deklar�ljuk �s liter�ljuk a v�ltoz�kat
    //liter�ljuk �rt�ket adunk neki
    int minutesEntered = 0;
    double years = 0.0;//�vek
    double days = 0.0;//napok
    double minutesInYear = 0;//percek egy �vben
    // get input from user
    //bek�rj�k az adatokat
    printf("Please enter the number of minutes: ");
    //elmentj�k a bek�rt adatott
    scanf("%d", &minutesEntered);

    minutesInYear = (60 * 24 *365);

    years = (minutesEntered / minutesInYear);
    days = ((minutesEntered / 60.0) / 24);

    printf("%d minutes in approximately %f years and %f days: \n",minutesEntered, years , days );
    //most magyarul 2 t�zedesig %.2f
    printf("%d perc k�r�lbel�l %.2f �vnek �s %.2f napnak felel meg.\n", minutesEntered, years, days);

    return 0;
}
