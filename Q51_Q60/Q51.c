//Q51: Write a program to print the following pattern:
    //5
   //45
  //345
 //2345
//12345
#include <stdio.h>
int main() {
    int rows = 5;

    for(int i = rows; i >= 1; i--) {
        // Print leading spaces
        for(int j = 1; j < i; j++) {
            printf(" ");
        }
        // Print numbers
        for(int k = i; k <= rows; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}


