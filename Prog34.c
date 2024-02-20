#include <stdio.h>

void Display( int iSize)
{
    int iCnt = 0;
   
    //         1         2          3
    for (iCnt = 1; iCnt <= iSize; iCnt++)    
    {
        printf("Jay Ganesh.....\n");
    }
}
int main()
{
    int iValue =0;
    printf("Enter the number of times you want to display "Jay Ganesh" on Screen\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}