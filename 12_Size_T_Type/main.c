#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    size_t length = 42;
    printf("A hossz: %zd\n", length);
    return 0;
}
/*
size_t sosem lehet negat�v
Platform (architekt�ra)	size_t t�pusa	Maxim�lis �rt�k (size_t)
32 bites rendszer	unsigned int / unsigned long	4�294�967�295 (kb. 4 GB)
64 bites rendszer	unsigned long / unsigned long long	18�446�744�073�709�551�615 (18 quintilli�!)
ki�rat�sa : %zd
*/
