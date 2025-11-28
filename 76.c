#include <stdio.h>

int main() {
    int rows, cols;
    int isSymmetric = 1; // Flag variable, assume matrix is symmetric

    // Taking input for matrix dimensions
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Reading matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A matrix must be square to be symmetric
    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    // Checking symmetry: A[i][j] == A[j][i]
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    // Printing result
    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
