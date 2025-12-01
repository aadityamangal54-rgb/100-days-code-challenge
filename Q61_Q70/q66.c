#include <stdio.h>
int main() {
    int n, i, key, pos;
    scanf("%d", &n);
    int arr[n + 1]; 
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    for (pos = 0; pos < n; pos++) {
        if (arr[pos] > key)
            break;
    }
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
