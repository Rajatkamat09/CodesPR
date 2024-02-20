#include <stdio.h>

// Function to calculate the sum of digits of a number
int DigitsSum(int Arr[], int iLength)
{
    int iSum = 0;
    int iCnt = 0 ;

    while (iLength != 0)
    {
        iSum = iSum + (iLength % 10) ;
        iLength = iLength / 10;
    }
    return iSum;

}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements \n", iSize);

    for (int iCnt = 0; iCnt <iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    DigitsSum (p , iSize);

    free(p);

    return 0;
}