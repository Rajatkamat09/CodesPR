#include <stdio.h>

#define TRUE 1 
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if (iNo<0)
{
    iNo = -iNo;
}
    if ((iNo % 2) ==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int iValue =0;
    BOOL bResult = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bResult =CheckEven(iValue);
    
    if (bResult==TRUE)
    {
        printf("%d is an Even Number \n",iValue);
    }
    else
    {
        printf("%d is a Odd Number \n",iValue);
    }
    return 0;
}