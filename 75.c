#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Taking input for first matrix dimensions
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];

    // Reading first matrix elements
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Taking input for second matrix dimensions
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];

    // Reading second matrix elements
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Checking if addition is possible
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible.\n");
        return 0;
    }

    int sum[rows1][cols1];

    // Adding both matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Printing the resulting matrix
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
