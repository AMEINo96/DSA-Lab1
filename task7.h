#ifndef TASK7_H
#define TASK7_H

#include <vector>

using Matrix = std::vector<std::vector<int>>;

Matrix standardMultiply(const Matrix& A, const Matrix& B);
Matrix strassenMultiply(const Matrix& A, const Matrix& B);
void printMatrix(const Matrix& M);
bool matricesEqual(const Matrix& A, const Matrix& B);

#endif
