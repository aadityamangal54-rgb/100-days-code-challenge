//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>
int findCeilIndex(int arr[], int size, int x) {
    int left = 0, right = size - 1;
    int ceilIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid; // Potential ceil found
            right = mid - 1; // Look for a smaller index
        } else {
            left = mid + 1; // Move to the right half
        }
    }

    return ceilIndex;
}
int main() {
    int arr[] = {1, 2, 4, 4, 5, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter the integer x: ");
    scanf("%d", &x);

    int ceilIndex = findCeilIndex(arr, size, x);

    if (ceilIndex != -1) {
        printf("The index of the smallest element greater than or equal to %d is: %d\n", x, ceilIndex);
    } else {
        printf("No element greater than or equal to %d exists in the array.\n", x);
    }

    return 0;
}
