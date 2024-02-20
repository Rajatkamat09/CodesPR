#include <stdio.h>

char ConvertCapital(char cValue)
{
    return cValue - 32;
}

int main()
{
    char ch = '\0';
    char cRet = '\0';

    printf("Enter the character :  ");
    scanf("%c", &ch);

    cRet = ConvertCapital(ch);
    printf("Converted Capital-Letter is: %c\n", cRet);

    return 0;
}