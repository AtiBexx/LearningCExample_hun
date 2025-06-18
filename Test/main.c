#include <stdio.h>
#include <time.h>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    clock_t start = clock();

    int sum = 0;
    for (int i = 0; i < 100000000; i++) {
        sum += add(i, i);
    }

    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Sum: %d\n", sum);
    printf("Elapsed time: %f seconds\n", time_spent);

    return 0;
}
