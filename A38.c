#include <stdio.h>

int main()
{
    // Assuming you are working with an integer variable
    unsigned int num;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%u", &num);

    // Check if the 7th bit is ON
    if ((num & (1 << 6)) != 0)
    {
        // Turn OFF the 7th bit
        num = num & ~(1 << 6);

        printf("7th bit was ON. Modified number: %u\n", num);
    }
    else
    {
        printf("7th bit was already OFF. Number remains unchanged: %u\n", num);
    }

    return 0;
}