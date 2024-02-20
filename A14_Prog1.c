

#include <stdio.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0 ;
    int iEven = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
        
    }
    return iEven ;
    
}

int main()
{
    int iSize = 0, iCnt = 0;
    int  iRet = 0;
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
    iRet = CountEven(p, iSize);
    printf("Even numbers are : %d\n",iRet);
    free(p);

    return 0;
}
