#include <stdio.h>
#include <stdbool.h>


bool Check_Prime(int iNo)
{
     int iCnt = 0;

        if (iNo < 0)  // updater
        {
            iNo = -iNo;
        }
    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if ((iNo % iCnt)== 0)
            {
                return false;
            }
        }
    return true; 
}
int main()
{
    int iValue = 0;
    bool bResult = false;
    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bResult = Check_Prime(iValue);
    if (bResult == true)
    {
        printf("%d is a Prime number \n", iValue);
    }
    else
    {
        printf("%d is not a Prime number \n", iValue);
    }

    return 0;
}