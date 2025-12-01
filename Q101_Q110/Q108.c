//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
void productExceptSelf(int nums[], int size, int result[]) {
    int leftProduct[size];
    int rightProduct[size];

    // Initialize left and right product arrays
    leftProduct[0] = 1;
    rightProduct[size - 1] = 1;

    // Calculate left products
    for (int i = 1; i < size; i++) {
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
    }

    // Calculate right products
    for (int i = size - 2; i >= 0; i--) {
        rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
    }

    // Calculate result by multiplying left and right products
    for (int i = 0; i < size; i++) {
        result[i] = leftProduct[i] * rightProduct[i];
    }
}
int main() {
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int result[size];

    productExceptSelf(nums, size, result);

    printf("Product array except self:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
