#include <stdio.h>
#include <stdlib.h>

int main()
{
    //enum lista
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;//incializ�lis Liter�l�s be�ll�tjuk a Today �rt�k�t

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
