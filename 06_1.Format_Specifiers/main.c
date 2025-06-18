#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerVar = 100;
    float floatingVar = 331.79;
    float f = 3.9993232323;
    float e = 3.9993232323;
    float x = 3.9993232323;

    printf("%f\n", f);//6 tizedejegyik pontossn irja ki %f
    printf("%.2f\n", e);//2 tizedejegyik pontossn irja ki %.2f
    printf("%.5f\n", x);//5 tizedejegyik pontossn irja ki %.5f
    printf("integerVar = %i, flotaaingVar= %f\n", integerVar, floatingVar);
    return 0;
}
