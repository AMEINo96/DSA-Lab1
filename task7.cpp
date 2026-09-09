#include "task7.h"
#include <iostream>

Matrix addMatrices(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix C(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

Matrix subtractMatrices(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix C(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    return C;
}

Matrix standardMultiply(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix C(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n; ++k) {
            for (int j = 0; j < n; ++j) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

Matrix strassenMultiply(const Matrix& A, const Matrix& B) {
    int n = A.size();
    if (n == 1) {
        return {{A[0][0] * B[0][0]}};
    }
    if (n <= 2) {
        return standardMultiply(A, B);
    }

    int k = n / 2;
    Matrix a11(k, std::vector<int>(k)), a12(k, std::vector<int>(k)),
           a21(k, std::vector<int>(k)), a22(k, std::vector<int>(k));
    Matrix b11(k, std::vector<int>(k)), b12(k, std::vector<int>(k)),
           b21(k, std::vector<int>(k)), b22(k, std::vector<int>(k));

    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < k; ++j) {
            a11[i][j] = A[i][j];
            a12[i][j] = A[i][j + k];
            a21[i][j] = A[i + k][j];
            a22[i][j] = A[i + k][j + k];

            b11[i][j] = B[i][j];
            b12[i][j] = B[i][j + k];
            b21[i][j] = B[i + k][j];
            b22[i][j] = B[i + k][j + k];
        }
    }

    Matrix p1 = strassenMultiply(a11, subtractMatrices(b12, b22));
    Matrix p2 = strassenMultiply(addMatrices(a11, a12), b22);
    Matrix p3 = strassenMultiply(addMatrices(a21, a22), b11);
    Matrix p4 = strassenMultiply(a22, subtractMatrices(b21, b11));
    Matrix p5 = strassenMultiply(addMatrices(a11, a22), addMatrices(b11, b22));
    Matrix p6 = strassenMultiply(subtractMatrices(a12, a22), addMatrices(b21, b22));
    Matrix p7 = strassenMultiply(subtractMatrices(a11, a21), addMatrices(b11, b12));

    Matrix c11 = addMatrices(subtractMatrices(addMatrices(p5, p4), p2), p6);
    Matrix c12 = addMatrices(p1, p2);
    Matrix c21 = addMatrices(p3, p4);
    Matrix c22 = subtractMatrices(subtractMatrices(addMatrices(p5, p1), p3), p7);

    Matrix C(n, std::vector<int>(n, 0));
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < k; ++j) {
            C[i][j] = c11[i][j];
            C[i][j + k] = c12[i][j];
            C[i + k][j] = c21[i][j];
            C[i + k][j + k] = c22[i][j];
        }
    }

    return C;
}

void printMatrix(const Matrix& M) {
    for (const auto& row : M) {
        for (int val : row) {
            std::cout << val << "\t";
        }
        std::cout << "\n";
    }
}

bool matricesEqual(const Matrix& A, const Matrix& B) {
    if (A.size() != B.size()) return false;
    for (size_t i = 0; i < A.size(); ++i) {
        if (A[i].size() != B[i].size()) return false;
        for (size_t j = 0; j < A[i].size(); ++j) {
            if (A[i][j] != B[i][j]) return false;
        }
    }
    return true;
}
