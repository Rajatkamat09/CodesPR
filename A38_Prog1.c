
#include <stdio.h>

typedef unsigned int UINT;

UINT ChkBit(UINT iNO)
{
    if ((iNO &(1 << 6) != 0))
    {
        iNO = iNO & ~(1 << 6);
        printf("Modified number: %u\n", iNO);
    }
    else
    {
        printf("Number remains unchanged: %u\n", iNO);
    }
}

int main()
{
    int iNum = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%u", &iNum);

    ChkBit(iNum);

    return 0;
}