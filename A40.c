#include <stdio.h>

void checkBits(int num, int position1, int position2)
{
    // Check if the bit at the first position is ON or OFF
    if ((num & (1 << (position1 - 1))) != 0)
    {
        printf("Bit at position %d is ON\n", position1);
    }
    else
    {
        printf("Bit at position %d is OFF\n", position1);
    }

    // Check if the bit at the second position is ON or OFF
    if ((num & (1 << (position2 - 1))) != 0)
    {
        printf("Bit at position %d is ON\n", position2);
    }
    else
    {
        printf("Bit at position %d is OFF\n", position2);
    }
}

int main()
{
    int num, position1, position2;

    // Accepting input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Accepting positions from the user
    printf("Enter the first position: ");
    scanf("%d", &position1);

    printf("Enter the second position: ");
    scanf("%d", &position2);

    // Calling the function to check bits
    checkBits(num, position1, position2);

    return 0;
}