
#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 1;

    for (iCnt = (iNo*10); iCnt >= iNo; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }

    printf("\n");
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :  ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}