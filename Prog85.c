// hardcoded values given in for loop.


#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <=6; iCnt++)
    {
        printf("*\t",iCnt);
        
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number :  ");
    scanf ("%d",&iValue);

    Display(iValue);

    return 0;
}