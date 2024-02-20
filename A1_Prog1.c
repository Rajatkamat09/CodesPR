#include <stdio.h>

int Divide (int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 ==0)
    {
        return -1;
    }
    iAns = (iNo1/iNo2);
    return iAns;
}

int main()
{
    int iValue1 =0;
    int iValue2 =0;
    int iResult = 0;

    printf("Enter the 1st Number : ");
    scanf("%d",&iValue1);

    printf("Enter the 2nd Number : ");
    scanf("%d",&iValue2);

    iResult = Divide(iValue1,iValue2);
    printf("The Divison is : %d \n",iResult);

    return 0;
}