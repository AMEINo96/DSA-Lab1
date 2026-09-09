#include <iostream>
#include <vector>
using namespace std;

// Forward declarations
vector<int> findMode(int arr[], int size);
void printModes(const vector<int> &modes);

int main() {
    cout << "--- Task 6: Histogram Analysis (Mode of Array) ---" << endl;

    // Test 1: Unique mode
    int arr1[] = { 1, 3, 3, 3, 2, 4, 2, 5 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Test 1 (Unique mode): ";
    printModes(findMode(arr1, size1));

    // Test 2: Multiple modes
    int arr2[] = { 1, 2, 2, 3, 3, 4 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Test 2 (Multiple modes): ";
    printModes(findMode(arr2, size2));

    // Test 3: Empty array
    int arr3[] = {};
    cout << "Test 3 (Empty array): ";
    printModes(findMode(arr3, 0));

    return 0;
}
