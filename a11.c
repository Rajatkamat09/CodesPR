#include<stdio.h>

int countFrequencyOfTwo(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 2) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int frequency = countFrequencyOfTwo(number);

    printf("The frequency of '2' in the number is: %d\n", frequency);

    return 0;
}