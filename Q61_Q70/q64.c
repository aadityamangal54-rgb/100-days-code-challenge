#include <stdio.h>
int main() {
    long long num;
    int count[10] = {0};
    int digit, i, maxCount = 0, mostFreqDigit = 0;
    scanf("%lld", &num);
    while (num != 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFreqDigit = i;
        }
    }

    printf("%d", mostFreqDigit);

    return 0;
}
