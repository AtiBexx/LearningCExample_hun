#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");
    do
    {
        printf("Ez egy végtelen do...while ciklus!\n");
    } while (1);

    return 0; // Ez sem fut le soha
}
