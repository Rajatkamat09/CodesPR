
#include <stdio.h>

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Number is Small\n");
    }
    else if ((iNo > 50) && (iNo <= 100))
    {
        printf("Number is Medium\n");
    }
    else if (iNo>100)
    {
        printf("Number is Greater\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number :  ");
    scanf("%d", &iValue);

    Number(iValue);
    return 0;
}