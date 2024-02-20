

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if ((iDigit % 10) == 0)
        {
            return TRUE;
            break;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("Digit contains Zero in it\n");
    }
    else
    {
        printf("Digit does not contains Zero in it\n");
    }

    return 0;
}
