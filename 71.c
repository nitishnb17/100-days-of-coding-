#include <stdio.h>

int main() {
    int rows, cols;

    // Taking number of rows and columns as input
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];  // Declaring a 2D array (matrix)

    // Reading elements of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
