#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumE = 0;
    int iSumO = 0;
    int iSum = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSumE = iSumE + iCnt;
        }
        return iSumE;
    }
    for (iCnt = 0; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSumO = iSumO + iCnt;
        }
        return iSumO;
    }
    return iSum = iSumE - iSumO;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("Difference between the Even and Odd factors is :  %d\n", iRet);

    return 0;
}