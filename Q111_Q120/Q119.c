//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
#define MAX_SIZE 100
int find_repeated_element(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    for (int i = 1; i < size; i++) {
        result ^= i;
    }
    return result;
}
int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array (n): ");
    scanf("%d", &size);

    printf("Enter %d elements (numbers from 1 to %d with one repeated):\n", size, size - 1);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated_element = find_repeated_element(arr, size);
    printf("The repeated element is: %d\n", repeated_element);

    return 0;
}

    
