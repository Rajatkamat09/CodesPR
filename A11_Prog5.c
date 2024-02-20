
#include<stdio.h>
int CountFour(int iNo)
{
   int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        if ((iNo % 10) <6)
        {
            iDigit++;
          
        }
          iNo = iNo / 10;
    }
    return iDigit;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("The Frequency is : %d\n",iRet);

    return 0;

}
