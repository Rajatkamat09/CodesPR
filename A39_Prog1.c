

#include <stdio.h>
#include <stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNO, int iPos)
{
    unsigned int iMask = 1 << iPos;
    if ((iNO & iMask) != 0)
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
    unsigned int iPost = 0; 
    BOOL bRet = FALSE;

    printf("Enter the Number : ");
    scanf("%u", &iNum);

    printf("Enter the Position : ");
    scanf("%u", &iPost); 

    bRet = ChkBit(iNum, iPost);
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
