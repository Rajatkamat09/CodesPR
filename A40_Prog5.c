
#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNO, int iStart, int iEnd)
{
    unsigned int iMask = 0 ;
    iMask = ((1u << (iEnd - iStart + 1)) - 1) << (iStart - 1);

    iNO ^= iMask;
}
int main()
{
    int iNum = 0;
    int iSt = 0;
    int iEd = 0 ;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iNum);


    printf("Enter the starting position: ");
    scanf("%d", &iSt);

    printf("Enter the ending position: ");
    scanf("%d", &iEd);

    
    iRet = ToggleBitRange(iNum, iSt, iEd);

    printf("Modified number is: %d\n", iRet);

    return 0;
}
