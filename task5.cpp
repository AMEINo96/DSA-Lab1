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
