#include <iostream>
#include <vector>
#include "task3.h"

void printIndices(const std::vector<int>& indices) {
    if (indices.empty()) {
        std::cout << "[Empty / Key Not Found]";
    } else {
        std::cout << "[ ";
        for (int idx : indices) {
            std::cout << idx << " ";
        }
        std::cout << "]";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "--- Test Task 3: Find All Indices of an Element ---" << std::endl;

    // Test Case 1: Multiple occurrences
    int arr1[] = {1, 2, 3, 4, 1, 1, 2, 2, 3, 4, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "Test Case 1 (Multiple occurrences of 1): ";
    printIndices(findIndices(arr1, size1, 1));

    // Test Case 2: Key not present
    std::cout << "Test Case 2 (Key 99 not present): ";
    printIndices(findIndices(arr1, size1, 99));

    // Test Case 3: Empty array
    int arr3[] = {};
    std::cout << "Test Case 3 (Empty array): ";
    printIndices(findIndices(arr3, 0, 5));

    return 0;
}
