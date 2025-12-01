//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>
void sortArray(int arr[], int size) {
    // Simple Bubble Sort to sort the array
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int findKthSmallest(int arr[], int size, int k) {
    sortArray(arr, size); // Sort the array
    return arr[k - 1]; // Return the kth smallest element
}
int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > size) {
        printf("Invalid input: k should be between 1 and %d.\n", size);
        return 1;
    }

    int kthSmallest = findKthSmallest(arr, size, k);

    printf("The %dth smallest element in the array is: %d\n", k, kthSmallest);

    return 0;
}
