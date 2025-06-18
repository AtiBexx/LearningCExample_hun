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

    double width = 32.3;//szélleseég
    double height = 15.3;//hosszúság
    double perimeter = 0.0;
    double area =0.0;//terület

    perimeter = 2.0 * (height + width);
    area = width * height;
    //akár hozzáadhatnánk 2 tizedesjegyes kiírást is
    // %2.f
    printf("Width is: %f, Height is: %f, permiter is : %f\n", width, height, perimeter);
    //kerület eredménye és adatok a szélesség magasságról.
    printf("Area is: %f\n\n", area);//terület eredménye
    printf("**Magyarul:**\n");
    printf("Szélesség: %f Magasság: %f\n", width,height);
    printf("A téglalap kerülete: %f\n", perimeter);
    printf("A téglalap területe: %f\n", area);

    return 0;
}
/*
terület = szélesség × magasság
kerület = 2 × (szélesség + magasság)
*/
