
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
     if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = -iNo; iCnt<= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter the Number :  ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}