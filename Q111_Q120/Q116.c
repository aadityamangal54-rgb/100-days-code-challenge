//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
#include <stdio.h>
void findTwoSumIndices(int nums[], int size, int target, int *index1, int *index2) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                *index1 = i;
                *index2 = j;
                return;
            }
        }
    }
    *index1 = -1;
    *index2 = -1;
}
int main() {
    int nums[] = {2, 7, 11, 15};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target;
    int index1, index2;

    printf("Enter the target integer: ");
    scanf("%d", &target);

    findTwoSumIndices(nums, size, target, &index1, &index2);

    if (index1 != -1 && index2 != -1) {
        printf("Indices of the two numbers that add up to %d are: %d %d\n", target, index1, index2);
    } else {
        printf("-1 -1\n");
    }

    return 0;
}
