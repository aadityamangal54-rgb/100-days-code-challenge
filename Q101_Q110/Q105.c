//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>
int findMajorityElement(int nums[], int size) {
    int count = 0;
    int candidate = -1;

    // Phase 1: Find a candidate for majority element
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        count += (nums[i] == candidate) ? 1 : -1;
    }

    // Phase 2: Verify if the candidate is actually the majority element
    count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > size / 2) {
        return candidate; // Majority element found
    } else {
        return -1; // No majority element exists
    }
}
int main() {
    int nums[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int majorityElement = findMajorityElement(nums, size);

    if (majorityElement != -1) {
        printf("The majority element is: %d\n", majorityElement);
    } else {
        printf("No majority element exists in the array.\n");
    }

    return 0;
}
