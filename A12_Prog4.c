
#include<stdio.h>
int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 1;
    

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
            iDigit = iNo % 10;
            if (iDigit !=0)
            {
                iSum= iSum* iDigit;
            }
          iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);
    printf("Multiplication of the digits is : %d\n",iRet);

    return 0;

}
