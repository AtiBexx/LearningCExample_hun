/*Author:AtiBexx
 Purpose: This program is going to calculate the area of a rectange
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 int main(int argc,char *argv[])//argumentum megadása
 {
 system("chcp 1250 > nul");
 setlocale(LC_ALL, "");
 double width = atof(argv[1]); //szélleseég átadása az Argumentumnak
 double height = atof(argv[2]);//hosszúság átadása az Argumentumnak
 double perimeter = 0.0;
 double area =0.0;//terület
//performing perimeter calculator
 perimeter = 2.0 * (height + width);
 area = width * height;
 //Display Input
 printf("Width is: %f, Height is: %f, permiter is : %f\n", width, height,perimeter);
 printf("Area is: %f\n\n", area);//terület eredménye
 printf("**Magyarul:**\n");
 printf("Szélesség: %f Magasság: %f\n", width,height);
 printf("A téglalap kerülete: %f\n", perimeter);
 printf("A téglalap területe: %f\n", area);

 return 0;
 }
