#include <stdio.h>

int main() {
    int rows, cols;

    // Taking input for number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows]; // Array to store sum of each row

    // Reading matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating sum of each row
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;  // Initialize sum for each row
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Printing the sum of each row
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    return 0;
}
