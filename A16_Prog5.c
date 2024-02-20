
#include <stdio.h>

void DigitsSum(int Arr[], int iLength)
{

    int iCnt = 0;
    int iSum = 0;
    while (Arr[iCnt] != 0)
    {
        iSum = iSum + Arr[iCnt] % 10;
        Arr[iCnt] = Arr[iCnt] / 10;
         iSum = iSum +Arr[iCnt];
    }

    for (iCnt = 0; iCnt <iLength; iCnt++)
    {
        iSum = Arr[iCnt];
        printf("Sum of digits is %d :   %d\n", Arr[iCnt], iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the Number of Elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements \n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the Element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    DigitsSum(p, iSize);

    free(p);

    return 0;
}
