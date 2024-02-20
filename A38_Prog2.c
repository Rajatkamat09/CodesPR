
#include <stdio.h>

typedef unsigned int UINT;

UINT OFFBit(UINT iNO)
{
     if ((iNO &(1 << 6) != 0) && (iNO & (1 << 9)!= 0))
    {
        iNO = (iNO & ~(1 << 6) && (iNO & ~(1 << 9) != 0));
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

    printf("Enter the Number : ");
    scanf("%u", &iNum);

    OFFBit(iNum);

    return 0;
}

