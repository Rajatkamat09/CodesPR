
#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0 


BOOL ChkBit(UINT iNO)
{
    if (iNO & (1 < 14) != 0)
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
    scanf("%u",&iNum);

    bRet = ChkBit(iNum);
    if (bRet == TRUE)
    {
        printf("15th Bit is ON..\n");
    }
    else
    {
        printf("15th Bit is OFF..\n");
    }
    
    return 0;
}