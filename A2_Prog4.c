#include <stdio.h>

int Display(int iNo,int iFrequency)
{
    int iCnt= 0;

    for ( iCnt = 1; iCnt <=iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the Number :");
    scanf ("%d",&iValue);

    printf("Enter the Frequency :");
    scanf ("%d",&iCount);

    Display (iValue,iCount);
    
    return 0;
}