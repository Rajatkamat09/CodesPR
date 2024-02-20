

#include <stdio.h>
#include <stdlib.h>


int LastOcc(int Arr[], int iLength, int iNo)
{
     int iCnt = 0 ;
     int iLast = Arr[-1];

    for (iCnt = 0; iCnt <iLength; iCnt++)
    {
        if ((Arr[iCnt])== iNo)
        {
            iLast = iCnt;
        }   
    }
    return iLast;
}

int main()
{
    int iSize = 0, iCnt = 0 , iValue = 0;
    int iLength = 0 , iRet = 0;
    int *p = NULL;

    printf("Enter the Number of Elements : ");
    scanf("%d", &iSize);

    printf("Enter the Number : ");
    scanf("%d", &iValue);

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
    iRet = LastOcc(p, iSize,iValue);
    if (iRet == -1)
    {
        printf("there is no such number");
    }
    else
    {
        printf("last Occurence of number is %d\n",iRet);
    }
    
    free(p);

    return 0;
}
