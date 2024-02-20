
#include <stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNO)
{
    int iCount = 0;

    while (iNO)
    {

        iCount= iCount+ (iNO & 1);

        iNO = iNO >> 1;
    }

    return iCount;
}


int main()
{
    int iNum = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iNum);

    iRet = CountOne(iNum);
    printf("Modified number is : %d\n", iRet);

    return 0;
}
