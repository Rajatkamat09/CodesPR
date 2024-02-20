

#include <stdio.h>

void Range(int iStart, int iEnd)
{
    int iCnt = 0;

    if (iEnd < iStart)
    {
        printf("Invalid Number");
    }
    
    for (iCnt= iStart; iCnt<= iEnd; iCnt++)
    {
        if ((iCnt %2) == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    printf("\n");
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Start number: ");
    scanf("%d", &iValue1);

    printf("Enter the End number: ");
    scanf("%d", &iValue2);

    Range(iValue1, iValue2);

    return 0;
}