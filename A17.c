#include <stdio.h>

int main()
{
    int number, i;
    char ch = 'A';

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the entered number is within the range of alphabets
    if (number < 1 || number > 26)
    {
        printf("Please enter a number between 1 and 26.\n");
        return 1; // Exit the program with an error status
    }

    printf("Pattern: ");
    for (i = 0; i < number; i++)
    {
        printf("%c ", ch + i);
    }

    printf("\n");

    return 0;
}