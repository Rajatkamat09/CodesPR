

#include <stdio.h>

int Frequency(int Arr[], int iLength)
{
     int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;
    int iDiff = 0;

    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    iDiff = iEven - iOdd;
    return iDiff;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter the Number of Elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the Element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    iRet = Frequency(p, iSize);
    printf("The Difference is : %d \n",iRet);
    free(p);

    return 0;
}
