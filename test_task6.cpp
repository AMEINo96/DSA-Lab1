#include <iostream>
#include <vector>
#include "task6.h"

void printModes(const std::vector<int>& modes) {
    if (modes.empty()) {
        std::cout << "[Empty array / No mode]" << std::endl;
        return;
    }
    std::cout << "[ ";
    for (int m : modes) {
        std::cout << m << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::cout << "--- Test Task 6: Histogram Analysis (Mode of Array) ---" << std::endl;

    // Test Case 1: Unique mode
    int arr1[] = {1, 3, 3, 3, 2, 4, 2, 5};
    std::cout << "Test 1 (Unique mode, expecting 3): ";
    printModes(findMode(arr1, sizeof(arr1)/sizeof(arr1[0])));

    // Test Case 2: Multiple modes
    int arr2[] = {1, 2, 2, 3, 3, 4};
    std::cout << "Test 2 (Multiple modes, expecting 2 and 3): ";
    printModes(findMode(arr2, sizeof(arr2)/sizeof(arr2[0])));

    // Test Case 3: Empty array
    int arr3[] = {};
    std::cout << "Test 3 (Empty array): ";
    printModes(findMode(arr3, 0));

    return 0;
}
