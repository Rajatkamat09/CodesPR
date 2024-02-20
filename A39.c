#include <stdio.h>

unsigned int TurnOnBit(unsigned int num, int position)
{
    // Shift 1 to the left by 'position' to create a bitmask
    unsigned int bitmask = 1u << position;

    // Perform bitwise OR with the bitmask to turn ON the bit at 'position'
    return num | bitmask;
}

int main()
{
    unsigned int num;
    int position;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%u", &num);

    // Prompt user to enter a bit position to turn ON
    printf("Enter the bit position to turn ON: ");
    scanf("%d", &position);

    // Turn ON the bit at the specified position
    unsigned int modifiedNum = TurnOnBit(num, position);

    // Display the modified number
    printf("Modified Number is : %u\n", modifiedNum);

    return 0;
}