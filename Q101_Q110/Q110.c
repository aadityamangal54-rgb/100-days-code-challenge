//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
void maxInEachSubarray(int arr[], int size, int k, int result[]) {
    for (int i = 0; i <= size - k; i++) {
        int maxElement = arr[i]; // Initialize max element for the current window
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxElement) {
                maxElement = arr[i + j]; // Update max element if a larger element is found
            }
        }
        result[i] = maxElement; // Store the maximum element of the current window
    }
}
int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter the size of subarrays (k): ");
    scanf("%d", &k);

    if (k > size || k <= 0) {
        printf("Invalid input: k should be between 1 and the size of the array.\n");
        return 1;
    }

    int result[size - k + 1];

    maxInEachSubarray(arr, size, k, result);

    printf("Maximum elements in each subarray of size %d:\n", k);
    for (int i = 0; i <= size - k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
    