#include <iostream>
#include <vector>
using namespace std;

// Forward declarations
vector<vector<int>> generatePascalsTriangle(int numRows);
void printTriangle(const vector<vector<int>> &triangle);

int main() {
    cout << "--- Task 5: Pascal's Triangle ---" << endl;

    // Test case 1: n = 0
    cout << endl << "Test case n = 0:" << endl;
    printTriangle(generatePascalsTriangle(0));

    // Test case 2: n = 1
    cout << endl << "Test case n = 1:" << endl;
    printTriangle(generatePascalsTriangle(1));

    // Test case 3: n = 5
    cout << endl << "Test case n = 5:" << endl;
    vector<vector<int>> t5 = generatePascalsTriangle(5);
    printTriangle(t5);

    cout << endl << "Row 5 contents: ";
    for (int x : t5[4]) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
