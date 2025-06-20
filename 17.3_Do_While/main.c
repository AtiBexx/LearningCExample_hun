#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");
    int number = 1;

    do
    {
        printf("do...while ciklus: %d\n", number);
        number++;
    } while (number <= 5);

    return 0;
}
