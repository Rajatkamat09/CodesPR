

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Number of Elements ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
