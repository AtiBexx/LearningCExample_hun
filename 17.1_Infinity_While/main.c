#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("chcp 1250 > nul");
    setlocale(LC_ALL, "");
    while (1)
    {
        printf("Ez egy végtelen while ciklus!\n");
    }

    return 0; // Ez sosem fut le
}
