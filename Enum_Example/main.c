#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };


    enum Company google = GOOGLE;
    enum Company facebook = FACEBOOK;
    enum Company xerox = XEROX;
    enum Company yahoo = YAHOO;
    enum Company ebay = EBAY;
    enum Company microsoft = MICROSOFT;

    google = 4;

    printf("The value of Google is: %d\n", google);
    printf("The value of Facebook is: %d\n", facebook);
    printf("The value of xerox is: %d\n", xerox);
    printf("The value of Yahoo is: %d\n", yahoo);
    printf("The value of Ebay is: %d\n", ebay);
    printf("The value of Microsoft is: %d\n", microsoft);

    return 0;
}
