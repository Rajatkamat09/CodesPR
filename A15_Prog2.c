

#include <stdio.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0 ;

    for (iCnt = 0; iCnt <iLength; iCnt++)
    {
        if ((Arr[iCnt])== iNo)
        {
            return iCnt;
        }   
    }
}

int main()
{
    int iSize = 0, iCnt = 0 , iValue = 0;
    int iRet = 0;
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
    iRet = FirstOcc(p, iSize,iValue);
    if (iRet == -1)
    {
        printf("there is no such number\n");
    }
    else
    {
        printf("First Occurence of number is %d\n",iRet);
    }
    
    free(p);

    return 0;
}
