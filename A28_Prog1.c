
#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool ChkChar(char *str, char ch)
{
    char iCnt = 0;
    for (iCnt = 1; iCnt >= str[iCnt]; iCnt++)
    {
        if (str[iCnt] == ch)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    BOOL bRet = 0;

    printf("Enter the String :  \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character: \n");
    scanf("%s", &cValue);

    bRet = ChkChar(Arr, cValue);
    if (bRet == TRUE)
    {
        printf("Character is present.\n");
    }
    else
    {
        printf("Character is absent.\n");
    }

    return 0;
}