#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  // szükséges a bool típushoz
#include <locale.h> //területi beállításhoz setlocale
int main()
{
    system("chcp 1250 > nul");//windowson müködik ékezetekhez
    setlocale(LC_ALL, ""); //Területi beállítás Linuxon is müködik ékezetekhez
    enum gender {male, female}; //enum definiálása
    enum gender myGender; //változó deklarálása
    myGender = male; //értékadás literálás

    enum gender anotherGender = female;

    bool ismale = (myGender == anotherGender); //Boolean Logikai összehasonlítás

    char* genderName[]= {"male" ,"female"};
    printf("ismale értéke : %s\n", ismale? "true" : "false" );
    printf("myGender értéke: %s\n", genderName[myGender] );

    return 0;
}
