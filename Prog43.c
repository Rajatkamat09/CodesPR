#include <stdio.h>
#include <stdbool.h>

int SumFactors(int iNo)
{
    int isum = 0;
    int iCnt = 0;

    for (iCnt = 1; iCnt <= (iNo); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
             isum = iCnt + iCnt;
        }
    }
    
    return isum;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter the 1st number :");
    scanf("%d", &iValue);

    iResult = SumFactors(iValue);
    printf("Sum of the factors are :%d\n", iResult);

    return 0;
}
//  time complexity 0(N/2)