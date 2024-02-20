
#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(int iNo)
{
    if ((iNo >= 0) && (iNo <= 9))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Digit :  ");
    scanf("%d", &iValue);

    bRet = ChkDigit(iValue);
    if (bRet == TRUE)
    {
        printf("It is a Digit.\n");
    }
    else
    {
        printf("It is not Digit.\n");
    }

    return 0;
}