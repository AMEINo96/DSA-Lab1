#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generatePascalsTriangle(int numRows) {
    vector<vector<int>> triangle;
    if (numRows <= 0) return triangle;

    triangle.resize(numRows);
    for (int i = 0; i < numRows; i++) {
        triangle[i].resize(i + 1, 1);
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    return triangle;
}

void printTriangle(const vector<vector<int>> &triangle) {
    if (triangle.empty()) {
        cout << "[Empty Triangle / 0 rows]" << endl;
        return;
    }
    for (size_t i = 0; i < triangle.size(); i++) {
        for (size_t space = 0; space < triangle.size() - i - 1; space++) {
            cout << " ";
        }
        for (int val : triangle[i]) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "--- Task 5: Pascal's Triangle ---" << endl;

    // Test case 1: n = 0
    cout << "\nTest case n = 0:" << endl;
    printTriangle(generatePascalsTriangle(0));

    // Test case 2: n = 1
    cout << "\nTest case n = 1:" << endl;
    printTriangle(generatePascalsTriangle(1));

    // Test case 3: n = 5
    cout << "\nTest case n = 5:" << endl;
    vector<vector<int>> t5 = generatePascalsTriangle(5);
    printTriangle(t5);

    cout << "\nRow 5 contents: ";
    for (int x : t5[4]) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
