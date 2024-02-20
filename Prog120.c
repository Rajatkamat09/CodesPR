#include <stdio.h>
#include <stdbool.h>

bool ChcekSmall(char cValue)
{
    if ((cValue >= 'a') && (cValue <= 'z'))
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

    bRet = ChcekSmall(ch);
    if (bRet == true)
    {
        printf("It is a Small letter\n");
    }
    else
    {
        printf("It is not a Small letter\n");
    }

    return 0;
}