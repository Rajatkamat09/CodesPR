#include <stdio.h>

int main() {
    long long num;
    int evenSum = 0, oddSum = 0;
    
    printf("Enter a number: ");
    scanf("%lld", &num);
    
    // Loop through each digit of the number
    while (num != 0) {
        int digit = num % 10; // Extract the last digit
        
        if (digit % 2 == 0) {
            evenSum += digit; // If digit is even, add it to evenSum
        } else {
            oddSum += digit; // If digit is odd, add it to oddSum
        }
        
        num /= 10; // Remove the last digit
    }
    
    // Calculate the difference and display it
    int difference = evenSum - oddSum;
    printf("Difference between summation of even digits and odd digits: %d\n", difference);

    return 0;
}