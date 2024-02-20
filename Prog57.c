#include <stdio.h>

int CountDigit(int iNo)
{
    int iCnt = 0;
    //int iDigit = 0;

    while (iNo != 0)
    {
        //iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt ;
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