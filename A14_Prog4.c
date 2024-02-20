

#include <stdio.h>
#include <stdlib.h>


int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFreq = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11 )
        {
            iFreq++;
        }
    }
    return iFreq;
    
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

    printf("Enter elements \n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the Element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    iRet = Frequency(p, iSize);
    printf("Frequency is : %d\n",iRet);
    free(p);

    return 0;
}
