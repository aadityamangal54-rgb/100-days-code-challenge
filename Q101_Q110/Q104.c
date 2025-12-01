//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>
int findPivotInteger(int n) {
    int totalSum = n * (n + 1) / 2; // Sum of first n natural numbers
    int leftSum = 0;

    for (int x = 1; x <= n; x++) {
        leftSum += x; // Sum from 1 to x

        int rightSum = totalSum - (leftSum - x); // Sum from x to n

        if (leftSum == rightSum) {
            return x; // Pivot integer found
        }
    }

    return -1; // No pivot integer exists
}
int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int pivotInteger = findPivotInteger(n);

    if (pivotInteger != -1) {
        printf("The pivot integer is: %d\n", pivotInteger);
    } else {
        printf("No pivot integer exists for the given input.\n");
    }

    return 0;
}
