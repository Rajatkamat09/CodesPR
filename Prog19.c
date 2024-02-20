#include <stdio.h>

int Maximum(int Numb1, int Numb2, int Numb3)
{
    if ((Numb1 > Numb2) && (Numb1 > Numb3))
    {
        return Numb1;
    }
    else if ((Numb2 > Numb1) && (Numb2 > Numb3))
    {
        return Numb2;
    }
    else
    {
        return Numb3;
    }
}
int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    auto int iResult = 0;

    printf("Enter 1st Number  :  ");
    scanf("%d", &iValue1);

    printf("Enter 2nd Number  :  ");
    scanf("%d", &iValue2);

    printf("Enter 2nd Number  :  ");
    scanf("%d", &iValue3);

    iResult = Maximum(iValue1, iValue2, iValue3);
    printf("Maximum Number is  : %d \n", iResult);

    return 0;
}