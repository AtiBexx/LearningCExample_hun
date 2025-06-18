#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");

    char str[100];
    int i;
    double x;

    printf("Enter a value: ");
    scanf("%s %d %lf", str, &i ,&x);//bekérjük az adatokat

    printf("\nYou entered:%s %d ", str, i);
    return 0;
}
