/*Author:AtiBexx
Purpose: This program is going to calculate the area of a rectange
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");

    double width = 32.3;//sz�llese�g
    double height = 15.3;//hossz�s�g
    double perimeter = 0.0;
    double area =0.0;//ter�let

    perimeter = 2.0 * (height + width);
    area = width * height;
    //ak�r hozz�adhatn�nk 2 tizedesjegyes ki�r�st is
    // %2.f
    printf("Width is: %f, Height is: %f, permiter is : %f\n", width, height, perimeter);
    //ker�let eredm�nye �s adatok a sz�less�g magass�gr�l.
    printf("Area is: %f\n\n", area);//ter�let eredm�nye
    printf("**Magyarul:**\n");
    printf("Sz�less�g: %f Magass�g: %f\n", width,height);
    printf("A t�glalap ker�lete: %f\n", perimeter);
    printf("A t�glalap ter�lete: %f\n", area);

    return 0;
}
/*
ter�let = sz�less�g � magass�g
ker�let = 2 � (sz�less�g + magass�g)
*/
