#include<stdio.h>

void ASCII(int iNo)
{
    int iCnt = 0;
    printf("----------------------------------------------------------");
    printf("-----------------ASCII------------------------------------");
    printf("----------------------------------------------------------");

    for (iCnt = 0; iCnt<=127; iCnt++)
    {
        printf("%c\t%d\t%o\t%x\t",iCnt,iCnt,iCnt,iCnt);
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter the number: ");
    scanf("%d",&iValue);

    ASCII(iValue);
    return 0 ;

}