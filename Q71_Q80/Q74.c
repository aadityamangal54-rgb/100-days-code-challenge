//Q74: Find the transpose of a matrix..

#include <stdio.h>
#define MAX 10
void transposeMatrix(int matrix[MAX][MAX], int transposed[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)

            transposed[j][i] = matrix[i][j];
    }
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
    int matrix[MAX][MAX], transposed[MAX][MAX];
    int row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix, transposed, row, col);

    printf("Transposed Matrix:\n");
    printMatrix(transposed, col, row);

    return 0;
}

