#include <stdio.h>
int main() {
    int n, i, key;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    int low = 0, high = n - 1, mid;
    int foundIndex = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (foundIndex != -1)
        printf("Found at index %d", foundIndex);
    else
        printf("-1");

    return 0;
}
