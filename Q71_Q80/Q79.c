//Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>
#define MAX 10
void diagonalTraversal(int matrix[MAX][MAX], int row, int col) {
    for (int line = 1; line <= (row + col - 1); line++) {
        int start_col = 0 > (line - row) ? 0 : (line - row);
        int count = (line < col ? line : col - start_col);
        for (int j = 0; j < count; j++) {
            int i = line - j - 1;
            int j_index = start_col + j;
            if (i < row && j_index < col) {
                printf("%d ", matrix[i][j_index]);
            }
        }
    }
    printf("\n");
}
void printMatrix(int matrix[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrix[MAX][MAX];
    int row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    printMatrix(matrix, row, col);

    printf("Diagonal Traversal of the matrix:\n");
    diagonalTraversal(matrix, row, col);

    return 0;
}
