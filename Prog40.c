#include <stdio.h>
#include <stdbool.h>

bool CheckFactor(int iNo1,int iNo2)
{
    if ((iNo1%iNo2)==0)
    {
        return true;
    }
    else{
        return false;
    }
    
}

int main()
{
    int iValue1 =0;
    int iValue2 =0;
    bool bResult = false;

    printf("Enter the 1st number :");
    scanf("%d",&iValue1);

    printf("Enter the 2nd number :");
    scanf("%d",&iValue2);

    bResult = CheckFactor(iValue1,iValue2);
    if(bResult == true)
    {
        printf("%d is a factor of %d\n",iValue2,iValue1);
    }
    else 
    {
        printf("%d is a not factor of %d\n",iValue2,iValue1);
    }
    
    return 0;
}