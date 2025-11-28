//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include<math.h>
int main() {
    int num, firstDigit, lastDigit, middlePart, numDigits = 0, tempNum;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Handle negative numbers
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    
    tempNum = num;
    
    // Find the last digit
    lastDigit = tempNum % 10;
    
    // Find the number of digits and the first digit
    while (tempNum >= 10) {
        tempNum /= 10;
        numDigits++;
    }
    firstDigit = tempNum;
    
    // If the number has only one digit, no swap needed
    if (numDigits == 0) {
        printf("Swapped Number: %d\n", num);
        return 0;
    }
    
    // Calculate the middle part of the number
    middlePart = (num / 10) % (int)pow(10, numDigits - 1);
    
    // Construct the new number with swapped digits
    int swappedNum = lastDigit * (int)pow(10, numDigits) + middlePart * 10 + firstDigit;
    
    printf("Swapped Number: %d\n", swappedNum);
    
    return 0;
}


