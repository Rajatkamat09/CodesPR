
#include<stdio.h>
int DollarToINR(int iNo)
{
    int iAns = 0;

    if (iNo<=0)
    {
        iNo =-iNo;
    }

    iAns = iNo*70;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

     printf("ENter the number: \n");
     scanf("%d",&iValue);

    iRet= DollarToINR(iValue);
    printf("Value in INR is : %d\n",iRet);
    return 0 ;
}