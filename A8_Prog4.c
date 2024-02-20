
#include<stdio.h>

int ODDFactorial(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    if (iNo<=0)
    {
        iNo=-iNo;
    }
     for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
            iSum = iSum*iCnt;
            
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

     printf("ENter the number: \n");
     scanf("%d",&iValue);

    iRet= ODDFactorial(iValue);
    printf("ODD Factorial is  : %d\n",iRet);
    return 0 ;
}
