#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");

    //kiÍrások
    //A char típusú változók hány bájtot foglalnak és így tovább.
    printf("Variables of type char occupy %u bytes\n", sizeof(char));
    printf("Variables of type short occupy %u bytes\n", sizeof(short));
    printf("Variables of type int occupy %u bytes\n", sizeof(int));
    printf("Variables of type long occupy %u bytes\n", sizeof(long));
    printf("Variables of type long long occupy %u bytes\n", sizeof(long long));
    printf("Variables of type float occupy %u bytes\n", sizeof(float));
    printf("Variables of type double occupy %u bytes\n", sizeof(double));
    printf("Variables of type long double occupy %u bytes\n", sizeof(long double));

    return 0;
}
