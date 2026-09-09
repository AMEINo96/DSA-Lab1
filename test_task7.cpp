#include <iostream>
#include <vector>
using namespace std;

using Matrix = vector<vector<int>>;

// Forward declarations
Matrix standardMultiply(const Matrix &A, const Matrix &B);
Matrix strassenMultiply(const Matrix &A, const Matrix &B);
void printMatrix(const Matrix &M);

int main() {
    cout << "--- Task 7: Strassen's Matrix Multiplication ---" << endl;

    // Test 1: 2x2 Matrix
    cout << endl << "[Test 1: 2x2 Matrix Multiplication]" << endl;
    Matrix A2 = {{1, 2}, {3, 4}};
    Matrix B2 = {{5, 6}, {7, 8}};
    cout << "Standard Result:" << endl;
    printMatrix(standardMultiply(A2, B2));
    cout << "Strassen Result:" << endl;
    printMatrix(strassenMultiply(A2, B2));

    // Test 2: 4x4 Matrix
    cout << endl << "[Test 2: 4x4 Matrix Multiplication]" << endl;
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
    cout << "Standard Result:" << endl;
    printMatrix(standardMultiply(A4, B4));
    cout << "Strassen Result:" << endl;
    printMatrix(strassenMultiply(A4, B4));

    return 0;
}
