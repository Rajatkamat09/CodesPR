
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for (i = 0, ch = 'a'; i <iRow; i++, ch)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j <iCol; j++)
            {
                printf("%c\t", ch + j);
            }
        }
        else
        {
            for (int j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
            }
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