#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if ((iNo % 5)==0)
    {
        return TRUE ;
    }
    else
    {
        return FALSE;
    }
}
int main()
{

    int iValue = 0;
    BOOL bResult = FALSE;

    printf("Enter Number ");
    scanf("%d", &iValue);

        bResult = Check(iValue);

    if (bResult == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not divisible by 5\n");
    }
    return 0;
}