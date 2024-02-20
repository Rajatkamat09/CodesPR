#include <stdio.h>

void PrintEven(int iNo)
{

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt =0, iEven =0 ;
    for (iCnt = 1; iCnt<=iNo; iCnt++)
    {
        iEven = iCnt* 2;
        printf("%d\t",iEven);
    }
    printf("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter the Number \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}