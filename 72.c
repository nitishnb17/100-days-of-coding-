#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;  // Variable to store the sum of all elements

    // Taking input for number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];  // Declaring a 2D array (matrix)

    // Reading elements of the matrix and calculating sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // Adding each element to sum
        }
    }

    // Printing the sum of all elements
    printf("%d\n", sum);

    return 0;
}
