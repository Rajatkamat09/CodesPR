
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char cH = '\0';

    for (i = 1, cH= 'A' ;i <= iRow; i++,cH++)
    {
        for (j = 1, cH = 'A'; j <= iCol; j++,cH++)
        {
                printf("%c\t", cH);
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