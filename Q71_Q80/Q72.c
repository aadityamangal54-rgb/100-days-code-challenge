//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    int i, j;
    int sum = 0;

    // Read number of rows and columns
    printf("Enter number of rows (max %d): ", MAX_ROWS);
    scanf("%d", &rows);
    printf("Enter number of columns (max %d): ", MAX_COLS);
    scanf("%d", &cols);

    // Validate input
    if (rows > MAX_ROWS || cols > MAX_COLS || rows <= 0 || cols <= 0) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    // Read matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add to sum while reading
        }
    }

    // Print the sum of all elements
    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
