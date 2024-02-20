#include <stdio.h>
//////////////////////////////////////Addition of didgits//////////////////////
int CountDigit(int iNo)
{
    int iSum = 0;
    int idigit = 0;

    while (iNo != 0)
    {

        idigit = iNo % 10;
        iSum = iSum + idigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter the Number :  ");
    scanf("%d", &iValue);

    bRet = CountDigit(iValue);
    printf("%d\n", bRet);

    return 0;
}