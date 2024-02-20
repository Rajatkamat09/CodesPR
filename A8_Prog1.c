
#include<stdio.h>

void Display(int no)
{
     if (no <= 0)
    {
        no = -no;
    }
    
    int iCnt = 0;
    
    for (iCnt = 1; iCnt<= no; iCnt++)
    {
        printf("*\t");
    }
    for (iCnt = 1; iCnt<= no; iCnt++)
    {
        printf("#\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
     printf("ENter the number: \n");
     scanf("%d",&iValue);

     Display(iValue);
    return 0 ;
}