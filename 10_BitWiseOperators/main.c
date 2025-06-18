#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 60;// 0011 1100
    unsigned int b = 13;
    int result = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;


    result = ~a;// 0011 1101
    result2 = a << 2;
    result3 = a << 4;
    result4 = a >> 4;

    printf("result is %d\n\n", result);
    printf("result2 is %d\n\n", result2);
    printf("result3 is %d\n\n", result3);
    printf("result4 is %d\n\n", result4);
    return 0;
}
/*


* `a = 60` ami bin�risan: `0011 1100` (8 bitre vet�tve)
* `~a` a bitenk�nti neg�ci� (bitwise NOT), azaz minden
bitet megford�t (0-b�l 1 lesz, 1-b�l 0).
  Pl.: `~0011 1100` => `1100 0011`
  (ez az �rt�k a `signed int` eset�n negat�v sz�m lesz,
   mert a legfels� bit a jelz� bit).
* `a << 2` azt jelenti, hogy az `a` �rt�k�t 2
 bittel balra tolod, azaz l�nyeg�ben szorzod 4-gyel.
* `a << 4` az `a` �rt�k�t 4 bittel tolja balra
(szorozva 16-tal).
* `a >> 4` az `a` �rt�k�t 4 bittel tolja jobbra,
vagyis elosztja 16-tal (eg�sz oszt�s, marad�k n�lk�l).

A `printf`-ben `%d`-vel �rod ki az eredm�nyeket,
vagyis **signed int**-k�nt �rtelmezed �ket, m�g
akkor is, ha az `a` �s `b` unsigned volt. Ez a `~a`
eset�n k�l�n�sen fontos, mert a bitneg�ci� ut�n az
eredm�ny signed negat�v sz�m lesz.

**�sszefoglalva:**

* A program **sz�mok bitenk�nti manipul�ci�j�t** v�gzi.
* Nem konvert�l vagy ford�t �t sz�veget.
* Bitm�veletekkel matematikai �s logikai m�veleteket hajt v�gre sz�mokon.

Ha szeretn�d, seg�tek �rtelmezni az eredm�nyeket vagy �talak�tani a k�dot, hogy jobban meg�rtsd. K�rdezz nyugodtan!

*/
