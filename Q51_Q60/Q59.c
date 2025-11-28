// Q59: Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Traverse the array to count even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("The number of even elements in the array is: %d\n", evenCount);
    printf("The number of odd elements in the array is: %d\n", oddCount);

    return 0;
}
