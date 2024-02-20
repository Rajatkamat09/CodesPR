#include <stdio.h>

float Average(float Numb1,float Numb2,float Numb3)
{
    auto float fAvg = 0.0f;

    fAvg = ((Numb1 + Numb2 + Numb3) / 3);
    return fAvg;
}
int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iValue3 = 0;
    auto float iResult = 0.0f;

    printf("Enter 1st Number  :  ");
    scanf("%d", &iValue1);

    printf("Enter 2nd Number  :  ");
    scanf("%d", &iValue2);

    printf("Enter 3rd Number  :  ");
    scanf("%d", &iValue3);

    iResult = Average(iValue1, iValue2, iValue3);
    printf("Average is  : %f \n", iResult);

    return 0;
}