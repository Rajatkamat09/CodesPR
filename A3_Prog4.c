#include <stdio.h>

char DisplayConvert(char cValue1)
{
    if ((cValue1 >= 'a') && (cValue1 <= 'z'))
    {
        cValue1 = cValue1 - 32;
        printf("Uppercase is: %c\n", cValue1);
    }
    else if ((cValue1 >= 'A') && (cValue1 <= 'Z'))
    {
        cValue1 = cValue1 + 32;
        printf("Lower is: %c\n", cValue1);
    }
    else
    {
        printf("It is not a character.");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
