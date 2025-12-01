//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.
#include <stdio.h>
int findMissingNumber(int arr[], int size) {
    int expectedSum = size * (size + 1) / 2; // Sum of first n natural numbers
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i]; // Calculate the sum of elements in the array
    }

    return expectedSum - actualSum; // The difference is the missing number
}
int main() {
    int n;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n - 1]; // Array of size n-1

    printf("Enter %d integers between 0 to %d (excluding one number):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int missingNumber = findMissingNumber(arr, n - 1);

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}

