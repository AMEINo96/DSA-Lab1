#include <iostream>
#include <cstdlib>
#include "task7.h"

int main() {
    std::cout << "--- Test Task 7: Strassen's Matrix Multiplication ---" << std::endl;

    // Test 1: 2x2 Matrix
    std::cout << "\n[Test 1: 2x2 Matrix Multiplication]\n";
    Matrix A2 = {{1, 2}, {3, 4}};
    Matrix B2 = {{5, 6}, {7, 8}};
    Matrix resStandard2 = standardMultiply(A2, B2);
    Matrix resStrassen2 = strassenMultiply(A2, B2);

    std::cout << "Standard Result:\n";
    printMatrix(resStandard2);
    std::cout << "Strassen Result:\n";
    printMatrix(resStrassen2);
    std::cout << "Match: " << (matricesEqual(resStandard2, resStrassen2) ? "PASS" : "FAIL") << "\n";

    // Test 2: 4x4 Matrix
    std::cout << "\n[Test 2: 4x4 Matrix Multiplication]\n";
    Matrix A4 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7}
    };
    Matrix B4 = {
        {7, 6, 5, 4},
        {3, 2, 1, 0},
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    Matrix resStandard4 = standardMultiply(A4, B4);
    Matrix resStrassen4 = strassenMultiply(A4, B4);

    std::cout << "Standard Result:\n";
    printMatrix(resStandard4);
    std::cout << "Strassen Result:\n";
    printMatrix(resStrassen4);
    std::cout << "Match: " << (matricesEqual(resStandard4, resStrassen4) ? "PASS" : "FAIL") << "\n";

    // Test 3: Random values comparison
    std::cout << "\n[Test 3: Random 4x4 Matrix Comparison]\n";
    Matrix Arand(4, std::vector<int>(4)), Brand(4, std::vector<int>(4));
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            Arand[i][j] = rand() % 10;
            Brand[i][j] = rand() % 10;
        }
    }
    Matrix resStdRand = standardMultiply(Arand, Brand);
    Matrix resStrRand = strassenMultiply(Arand, Brand);
    std::cout << "Random Test Match: " << (matricesEqual(resStdRand, resStrRand) ? "PASS" : "FAIL") << "\n";

    return 0;
}
