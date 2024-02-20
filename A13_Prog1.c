

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)  
{                                 
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;
    int iDiff = 0;

    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iEven = iEven +iCnt;
        }
        else
        {
            iOdd = iOdd + iCnt;
        }
        iDiff = iEven - iOdd;
        
    }
    return iDiff;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter the Number of Elements:  \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the Element :", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf(" Difference is : %d \n",iRet);

    free(p);

    return 0;
}