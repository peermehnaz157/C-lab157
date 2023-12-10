//C Program to find factorial of a given number using recursion
#include <stdio.h>
//Function Declaration
int factorial(int);
// Start of main function
int main() {
    int num, result;
    //Ask user for the input and store it in num
    printf("Enter a number to find it's Factorial: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial of negative number not possible\n");
    }
    else {
        //Calling our user defined function
        result = factorial(num);   
        //Displaying factorial of input number
        printf("The Factorial of %d is %d.\n", num, result);
    }
    return 0;
}
// Function Definition
int factorial(int num) {
    //Factorial of 0 and 1 is 1
    if (num == 0 || num == 1) {
        return 1;
    }
    else {
        //Function calling itself: recursion
        return(num * factorial(num - 1));
    }
}

