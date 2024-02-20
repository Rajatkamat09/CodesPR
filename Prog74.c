#include <stdio.h>
#include <stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    float fAverage = 0.0f;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    fAverage = ((float )iSum/(float)iSize);
    return fAverage ;
    
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0f;

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

    fRet = Average (ptr , iCount);
    printf("Average is :   %f\n",fRet);

    free(ptr);
    printf("Dynamic memory De-Allocated successfully ");

    return 0;
}