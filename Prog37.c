#include <stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt<= iValue; iCnt++)
    {
        printf("Hello %d\n",iCnt);
    }
}
int main()
{
    int iValue  =0;
    printf("Enter the no. to print multiple times: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}