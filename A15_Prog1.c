

#include <stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt <iLength; iCnt++)
    {
        if ((Arr[iCnt]) == iNo)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
    
}

int main()
{
    int iSize = 0, iCnt = 0 , iValue = 0;
    BOOL bRet = FALSE;
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
        printf("Enter the Element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    bRet = Check(p,iSize,iValue);
    if (bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }
    
    free(p);

    return 0;
}
