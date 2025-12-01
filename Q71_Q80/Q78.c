//Q78: Find the sum of main diagonal elements for a square matrix.


#include <stdio.h>
#define MAX 10
int sumMainDiagonal(int matrix[MAX][MAX], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}
void printMatrix(int matrix[MAX][MAX], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrix[MAX][MAX];
    int size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    printMatrix(matrix, size);

    int sum = sumMainDiagonal(matrix, size);
    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}
