//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rowSums[MAX_ROWS] = {0}; // Initialize all sums to 0
    int rows, cols;
    int i, j;

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

    // Read matrix elements and calculate row sums
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j]; // Add to the sum of the current row
        }
    }

    // Print the sum of each row
    printf("The sum of each row is:\n");
    for (i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i, rowSums[i]);
    }

    return 0;
}
