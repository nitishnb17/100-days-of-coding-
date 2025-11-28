#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of first matrix
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];

    // Reading first matrix elements
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input dimensions of second matrix
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];

    // Reading second matrix elements
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int product[rows1][cols2];

    // Initializing product matrix elements to 0
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiplying matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Printing the product matrix
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
