#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    int isum = 0;
    int iCnt = 0;

    if(iNo<0)   // updater
    {
        iNo= -iNo
    }

    for (iCnt =1; iCnt<= (iNo/2); iCnt++)     //6 , 28
    {
        if((iNo % iCnt)==0)
        isum = isum+ iCnt;
    }
    if (isum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue =0;
    bool bResult =0;

    printf("Enter the 1st number :");
    scanf("%d",&iValue);
    
    bResult= CheckPerfect(iValue);
    if (bResult)
    {
        printf("%d\n",iValue);
    }
    else 
    {
        printf("%d\n",iValue);
    }
    return 0;
}
//  time complexity 0(N/2)