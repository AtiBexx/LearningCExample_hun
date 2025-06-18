#include <stdio.h>
#include <stdbool.h> // Kell a 'bool', 'true', 'false' típushoz

#include <stdio.h>
#include <stdbool.h>

int main()
{
    float jason = 23.333f;
    double jason2 = 55.555555555555555e+11;

    _Bool boolVariable = 1;
    bool myBoolean = true;
    bool anotherBoolean = false;

    long int numberOFPoints = 137071100L;
    long double ld = 1.234e+7L;
    short s = 5;

    printf("Float: %f\n", jason);
    printf("Double: %lf\n", jason2);
    printf("Long double (mint double): %f\n", (double)ld); // kerülőút
    printf("Short: %d\n", s);
    printf("Long int: %ld\n", numberOFPoints);
    printf("Bool1 (_Bool): %d\n", boolVariable);
    printf("Bool2 (true): %d\n", myBoolean);
    printf("Bool3 (false): %d\n", anotherBoolean);

    return 0;
}


/*int main()
{
    float jason = 23.333f; // 'f' jelöli, hogy float literál
    double jason2 = 55.555555555555555e+11; // Ez double alapból, nem kell jelölés

    _Bool boolVariable = 1; // C90-es stílus, 'stdbool.h' nélkül
    bool myBoolean = true;  // C99-től elérhető
    bool anotherBoolean = false;

    long int numberOFPoints = 137071100L; // az 'L' opcionális, de jelezheti, hogy long

    long double ld = 1.234e+7L; // Helyesen deklarált long double változó
    // L kell, ha explicit long double típusú literált akarsz

    short s = 5; // 'short' típus, változónevet muszáj megadni

    printf("Float: %f\n", jason);
    printf("Double: %lf\n", jason2);
    printf("Long double: %Lf\n", ld);
    printf("Short: %d\n", s);
    printf("Bool1: %d\n", boolVariable);
    printf("Bool2: %d\n", myBoolean);
    printf("Bool3: %d\n", anotherBoolean);

    return 0;
}
*/
