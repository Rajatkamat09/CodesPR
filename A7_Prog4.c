
#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0 ;

    
    for (iCnt = 1; iCnt <= (iNo*10); iCnt++)
    {
        if ((iCnt % iNo)==0)
        {
            printf("%d\t",iCnt);
        }
        
    }

    printf("\n");
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :  ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}