#include <iostream>
#include <chrono>

template<typename T>
inline T add(T a, T b) {
    return a + b;
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    int sum = 0;
    for (int i = 0; i < 100000000; i++) {
        sum += add(i, i);
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Elapsed time: " << elapsed.count() << " seconds" << std::endl;

    return 0;
}
