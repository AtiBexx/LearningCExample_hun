#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  // sz�ks�ges a bool t�pushoz
#include <locale.h> //ter�leti be�ll�t�shoz setlocale
int main()
{
    system("chcp 1250 > nul");//windowson m�k�dik �kezetekhez
    setlocale(LC_ALL, ""); //Ter�leti be�ll�t�s Linuxon is m�k�dik �kezetekhez
    enum gender {male, female}; //enum defini�l�sa
    enum gender myGender; //v�ltoz� deklar�l�sa
    myGender = male; //�rt�kad�s liter�l�s

    enum gender anotherGender = female;

    bool ismale = (myGender == anotherGender); //Boolean Logikai �sszehasonl�t�s

    char* genderName[]= {"male" ,"female"};
    printf("ismale �rt�ke : %s\n", ismale? "true" : "false" );
    printf("myGender �rt�ke: %s\n", genderName[myGender] );

    return 0;
}
