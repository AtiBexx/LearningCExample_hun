#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long sum = 0LL;//0LL
    unsigned int count = 0;

    //Read the number of integers to be summed
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);
    //Sum integers from 1 to count
    unsigned int loop;
    for (loop = 1; loop <= count ; ++loop)
    {
        printf("inside loop");
        sum += loop;
    }

    printf("\nTotal of the first %u numbers is %llu\n", count, sum);

    return 0;
}
