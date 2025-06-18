#include <stdio.h>
#include <stdlib.h>

int main()
{
    _Bool a = 0;
    _Bool b = 1;
    _Bool result;//az eredmény false vagy true

    //result = a && b;//false mert mind a 2 nem igaz mivel az a = 0 a b = 1
    result = a || b;//true mert az egyik igaz

    printf("Result is: %s\n", result ? "true" : "false");

    return 0;
}
