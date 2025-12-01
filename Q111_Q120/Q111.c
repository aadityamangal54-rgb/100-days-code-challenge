//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
void firstNegativeInEachSubarray(int arr[], int size, int k, int result[])
{
    for (int i = 0; i <= size - k; i++) {
        int foundNegative = 0; // Flag to check if a negative number is found
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                result[i] = arr[i + j]; // Store the first negative integer of the current window
                foundNegative = 1;
                break;
            }
        }
        if (!foundNegative) {
            result[i] = 0; // No negative integer found in the current window
        }
    }
}
int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter the size of subarrays (k): ");
    scanf("%d", &k);

    if (k > size || k <= 0) {
        printf("Invalid input: k should be between 1 and the size of the array.\n");
        return 1;
    }

    int result[size - k + 1];

    firstNegativeInEachSubarray(arr, size, k, result);

    printf("First negative integers in each subarray of size %d:\n", k);
    for (int i = 0; i <= size - k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

