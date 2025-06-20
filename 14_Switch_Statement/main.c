#include <stdio.h>
#include <stdlib.h>

int main()
{
    //enum lista
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;//incializális Literálás beállítjuk a Today értékét

    switch (today)
    {
    case Sunday:
        printf("Today is Sunday.");
        break;
    case Monday:
        printf("Today is Monday.");
        break;
    case Saturday:
        printf("Today is Saturday.");
        break;
    default:
        printf("Whatever.");
        break;
    }
    return 0;
}
