#include <iostream>
#include "task5.h"

int main() {
    std::cout << "--- Test Task 5: Pascal's Triangle ---" << std::endl;

    // Test Case 1: n = 0
    std::cout << "\nTest Case 1 (n = 0):\n";
    auto t0 = generatePascalsTriangle(0);
    printPascalsTriangle(t0);

    // Test Case 2: n = 1
    std::cout << "\nTest Case 2 (n = 1):\n";
    auto t1 = generatePascalsTriangle(1);
    printPascalsTriangle(t1);

    // Test Case 3: n = 5
    std::cout << "\nTest Case 3 (n = 5):\n";
    auto t5 = generatePascalsTriangle(5);
    printPascalsTriangle(t5);

    std::cout << "Row 5 contents: ";
    for (int v : t5[4]) {
        std::cout << v << " ";
    }
    std::cout << "\n";

    return 0;
}
