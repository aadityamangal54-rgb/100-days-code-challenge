//Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
#include <stdio.h>
void findNextGreaterElements(int arr[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = -1; // Default to -1
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j]; // Next greater element found
                break;
            }
        }
    }
}
int main() {
    int arr[] = {4, 5, 2, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result[size];

    findNextGreaterElements(arr, size, result);

    printf("Next greater elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d -> %d\n", arr[i], result[i]);
    }

    return 0;
}
