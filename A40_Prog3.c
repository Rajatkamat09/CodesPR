
#include <stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNO)
{
    if (iNO & (1 << 8) || (iNO & (1 << 11)))
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
    BOOL bRet = FALSE;

    printf("Enter the Number : ");
    scanf("%d", &iNum);

    bRet = ChkBit(iNum);
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
