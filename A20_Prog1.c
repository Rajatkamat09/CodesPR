
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNo = 1;

    for (i = 1; i < iRow; i++)
    {
        for (j = 1; j < iCol; j++)
        {
            printf("%d\t", iNo);
            iNo = (iNo % 4) + 1;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows : ");
    scanf("%d", &iValue1);

    printf("Enter the Number of Coloums : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}