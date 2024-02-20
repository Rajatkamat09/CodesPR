
#include<stdio.h>
int CountRange(int iNo)
{
     int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        if (((iNo % 10) > 3) && (iNo % 10) < 7)
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

    iRet = CountRange(iValue);
    printf("The Digits between 3 and 7 are : %d\n",iRet);

    return 0;

}
