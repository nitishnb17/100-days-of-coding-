#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;  // Variable to store the sum of diagonal elements

    // Taking input for matrix dimensions
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Reading matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A valid main diagonal exists only for square matrices
    if (rows != cols) {
        printf("Matrix is not square.\n");
        return 0;
    }

    // Calculating the sum of main diagonal elements (where i == j)
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    // Printing the sum
    printf("%d\n", sum);

    return 0;
}
