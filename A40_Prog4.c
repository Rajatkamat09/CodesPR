
#include <stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNO, int iPos1, int iPos2)
{
    if (((iNO & (1 << (iPos1 - 1))) != 0) || (iNO & (1 << (iPos2 - 1))) != 0 )
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
    int iNum = 0;
    int iPosition1 = 0;
    int iPosition2 = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: ");
    scanf("%d", &iNum);

    printf("Enter the first position: ");
    scanf("%d", &iPosition1);

    printf("Enter the second position: ");
    scanf("%d", &iPosition2);

    bRet = ChkBit(iNum, iPosition1, iPosition2);
      if (bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}