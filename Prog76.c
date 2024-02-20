#include <stdio.h>
#include <stdlib.h>

int Mininum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt])<iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements  : ");
    scanf("%d", &iCount);

    ptr = malloc(iCount * sizeof(int));
    printf("Dynamic memory gets allocated successfully..");

    printf("Enter the elemets\n");

    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("ENter the Element no.%d :   ", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Mininum (ptr , iCount);
    printf("Mininum element is :   %d\n",iRet);

    free(ptr);
    printf("Dynamic memory De-Allocated successfully ");

    return 0;
}