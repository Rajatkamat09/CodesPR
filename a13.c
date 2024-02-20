/*
Q :- Write a program which accepts a range from user and display Addition of all even numbers 
between that range.
Numbers should be positive.
 I/P : 11 22
 O/P : 
*/

#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 1;

    if (iEnd < iStart)
    {
        printf("Invalid Number");
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
            iSum = iSum + iCnt;
        }
       return iSum;
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the Start number: ");
    scanf("%d", &iValue1);

    printf("Enter the End number: ");
    scanf("%d", &iValue2);

    iRet= RangeSumEven(iValue1, iValue2);
    printf("Addition is :  %d\n",iRet);

    return 0;
}