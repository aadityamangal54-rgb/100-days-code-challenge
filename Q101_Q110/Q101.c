// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>
void findFirstAndLastOccurrence(int nums[], int size, int target, int *first, int *last) {
    *first = -1;
    *last = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            if (*first == -1) {
                *first = i; // First occurrence
            }
            *last = i; // Update last occurrence
        }
    }
}
int main() {
    int nums[] = {1, 2, 2, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target;
    int first, last;

    printf("Enter the target integer: ");
    scanf("%d", &target);

    findFirstAndLastOccurrence(nums, size, target, &first, &last);

    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);

    return 0;
}

    