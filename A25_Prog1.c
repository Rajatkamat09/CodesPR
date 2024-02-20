
#include <stdio.h>

void DisplayASCII()
{
    
    int iCnt = 0;
    printf("----------------------------------------------------------\n");
    printf("-----------------ASCII Table------------------------------\n");
    printf("----------------------------------------------------------\n");

    for (iCnt = 0; iCnt<=127; iCnt++)
    {
        printf("Name  : %c\t",iCnt);
        printf("Decimal : %d\t",iCnt);
        printf("Ocata : %o\t",iCnt);
        printf("Hexa : %x\t",iCnt);
        printf("\n");
    }
    printf("\n");
       
}
int main()
{
    int iValue = 0 ;
    printf("Enter the Number: ");
    scanf("%d",&iValue);
    
    DisplayASCII();

    return 0;
}