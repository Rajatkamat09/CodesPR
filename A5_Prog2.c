 

#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if (iNo>100)
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
    int iValue = 0;
    BOOL bRet = FALSE;
     printf("Enter the Number:  ");
     scanf("%d",&iValue);
    
    bRet = ChkGreater(iValue);
    if (bRet == TRUE)
    {
        printf("Number is Greater\n");
    }
    else
    {
        printf("Number is Smaller\n");
    }
    
    return 0;
}