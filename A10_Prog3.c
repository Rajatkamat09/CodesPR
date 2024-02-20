

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if (iEnd < iStart)
    {
        printf("Invalid Number");
    }

    for (iCnt= iStart; iCnt<= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the Start number: ");
    scanf("%d", &iValue1);

    printf("Enter the End number: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    printf("Additon of numbers is : %d\n",iRet);

    return 0;
}