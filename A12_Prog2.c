
#include<stdio.h>
int CountOdd(int iNo)
{
     int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        if (((iNo % 10) %2 ) != 0)
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

    iRet = CountOdd(iValue);
    printf("The Frequency of Odd digits is : %d\n",iRet);

    return 0;

}
