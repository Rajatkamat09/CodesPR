#include <stdio.h>

void Display(int iNo)
{
    int iCnt =0;
    for ( iCnt = 1; iCnt <=5; iCnt++)
    {
        printf("*");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number to print * : ");
    scanf("%d",&iValue);

    Display (iValue);
    return 0 ;
}