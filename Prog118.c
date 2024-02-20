#include <stdio.h>
#include <stdbool.h>

bool ChcekCapital(char cValue)
{
    if ((cValue >= 65) && (cValue <= 90))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character :  ");
    scanf("%c", &ch);

    bRet = ChcekCapital(ch);
    if (bRet == true)
    {
        printf("It is a capital letter\n");
    }
    else
    {
        printf("It is not a capital letter\n");
    }

    return 0;
}