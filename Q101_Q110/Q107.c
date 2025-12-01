//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

//N.B:
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.
#include <stdio.h>  
void findPreviousGreaterElements(int arr[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = -1; // Default to -1
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j]; // Previous greater element found
                break;
            }
        }
    }
}
int main() {
    int arr[] = {4, 5, 2, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result[size];

    findPreviousGreaterElements(arr, size, result);

    printf("Previous greater elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d", result[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
