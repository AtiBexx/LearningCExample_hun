/*Author:AtiBexx
 Purpose: This program is going to calculate the area of a rectange
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 int main(int argc,char *argv[])//argumentum megad�sa
 {
 system("chcp 1250 > nul");
 setlocale(LC_ALL, "");
 double width = atof(argv[1]); //sz�llese�g �tad�sa az Argumentumnak
 double height = atof(argv[2]);//hossz�s�g �tad�sa az Argumentumnak
 double perimeter = 0.0;
 double area =0.0;//ter�let
//performing perimeter calculator
 perimeter = 2.0 * (height + width);
 area = width * height;
 //Display Input
 printf("Width is: %f, Height is: %f, permiter is : %f\n", width, height,perimeter);
 printf("Area is: %f\n\n", area);//ter�let eredm�nye
 printf("**Magyarul:**\n");
 printf("Sz�less�g: %f Magass�g: %f\n", width,height);
 printf("A t�glalap ker�lete: %f\n", perimeter);
 printf("A t�glalap ter�lete: %f\n", area);

 return 0;
 }
