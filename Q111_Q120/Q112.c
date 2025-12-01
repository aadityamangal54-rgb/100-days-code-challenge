//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>
int maxSubarraySum(int arr[], int size) {
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];

    for (int i = 1; i < size; i++) {
        maxEndingHere = (arr[i] > (maxEndingHere + arr[i])) ? arr[i] : (maxEndingHere + arr[i]);
        maxSoFar = (maxSoFar > maxEndingHere) ? maxSoFar : maxEndingHere;
    }

    return maxSoFar;
}
int main() {
    int arr[] = {-2, -3, -1, -4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubarraySum(arr, size);

    printf("The maximum sum of any contiguous subarray is: %d\n", result);

    return 0;
}
