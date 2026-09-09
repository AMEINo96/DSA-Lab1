#include "task5.h"
#include <iostream>

std::vector<std::vector<int>> generatePascalsTriangle(int numRows) {
    std::vector<std::vector<int>> triangle;
    if (numRows <= 0) {
        return triangle;
    }
    triangle.resize(numRows);
    for (int i = 0; i < numRows; ++i) {
        triangle[i].resize(i + 1, 1);
        for (int j = 1; j < i; ++j) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    return triangle;
}

void printPascalsTriangle(const std::vector<std::vector<int>>& triangle) {
    if (triangle.empty()) {
        std::cout << "[Empty Triangle / 0 rows]" << std::endl;
        return;
    }
    for (size_t i = 0; i < triangle.size(); ++i) {
        for (size_t space = 0; space < triangle.size() - i - 1; ++space) {
            std::cout << " ";
        }
        for (int val : triangle[i]) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
}
