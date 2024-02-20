

#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMulti = 0;

    if ((iNo1 == 0) || (iNo2 == 0) || (iNo3 == 0))
    {
        printf("\n");
        printf("Invalid Input...\n");
        printf("\n");
    }

    if ((iNo1 > 0) && (iNo2 > 0) && (iNo3 > 0))
    {
        iMulti = (iNo1 * iNo2 * iNo3);
    }
    return iMulti;
}



int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter the 1st number :  ");
    scanf("%d", &iValue1);

    printf("Enter the 2nd number :  ");
    scanf("%d", &iValue2);

    printf("Enter the 3rd number :  ");
    scanf("%d", &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication is : %d\n", iRet);

    return 0;
}