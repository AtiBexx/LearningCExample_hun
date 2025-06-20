#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ORABER 12.00
#define ADO_300 0.15
#define ADO_150 0.20
#define ADO_TOBB 0.25
#define TULORA 40

int main()
{
    system("chcp 1250 > null");
    setlocale(LC_ALL, "");

    int munkaora = 0;
    double bruttober = 0.0;
    double ado = 0.0;
    double nettober = 0.0;

    printf("Kérem, adja meg a heti ledolgozott órák számát: ");

    scanf("%d", &munkaora);

    if (munkaora <= TULORA)
    {
        bruttober = munkaora * ORABER;
    }
    else
    {
        bruttober = TULORA * ORABER;
        double tuloraber = (munkaora - TULORA) * (ORABER * 1.5);
        bruttober += tuloraber;
    }

    if (bruttober <= 300)
    {
        ado = bruttober * ADO_300;
    }
    else if (bruttober > 300 && bruttober <= 450)
    {
        ado = 300 * ADO_300;
        ado += (bruttober - 300) * ADO_150;
    }
    else
    {
        ado = 300 * ADO_300;
        ado += 150 * ADO_150;
        ado += (bruttober - 450) * ADO_TOBB;
    }

    nettober = bruttober - ado;

    printf("A heti bruttó bér: %.2f\n", bruttober);
    printf("Levont adó: %.2f\n", ado);
    printf("A heti nettó bér: %.2f\n", nettober);

    return 0;
}
