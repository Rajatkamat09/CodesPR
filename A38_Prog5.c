
#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNO)
{
    iNO = iNO | ((1 << 3) | (1 << 2) | (1 << 1) | (1 << 0));
    printf("Modified Number is : %u \n", iNO);
}

int main()
{
    int iNum = 0;

    printf("Enter the Number : ");
    scanf("%u", &iNum);

    ToggleBit(iNum);

    return 0;
}
