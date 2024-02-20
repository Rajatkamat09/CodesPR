
#include<stdio.h>

int DiffFactorial(int iNo)
{
    int iCnt = 0;
    int iSum1 = 1;
    int iSum2 = 1;
    int iDef = 0;
    if (iNo<=0)
    {
        iNo=-iNo;
    }
     for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
            iSum1 = iSum1*iCnt;
            
        }
    }
     for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
            iSum2 = iSum2*iCnt;
            
        }
    }
    iDef = iSum2-iSum1;
    return iDef;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

     printf("ENter the number: \n");
     scanf("%d",&iValue);

    iRet= DiffFactorial(iValue);
    printf(" Factorial Difference  is  : %d\n",iRet);
    return 0 ;
}
