//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>
int factorial(int n) {
    if(n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int num, originalNum, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    while(num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    if(sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }
    
    return 0;
}



