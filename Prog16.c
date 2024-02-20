#include <stdio.h>

int Maximum(int Numb1, int Numb2)
{
    if (Numb1 > Numb2)
    {
        return Numb1;
    }
    else
    {
        return Numb2;
    }
}
int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iResult = 0;

    printf("Enter 1st Number  :  ");
    scanf("%d", &iValue1);

    printf("Enter 2nd Number  :  ");
    scanf("%d", &iValue2);

    iResult = Maximum(iValue1, iValue2);
    printf("Maximum Number is  : %d \n",iResult);

    return 0;
}