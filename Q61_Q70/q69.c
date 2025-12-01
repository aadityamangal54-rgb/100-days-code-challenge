#include <stdio.h>
#include <limits.h>
int main() {
    int n, i;
    int largest = INT_MIN, secondLargest = INT_MIN;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("%d", secondLargest);

    return 0;
}
