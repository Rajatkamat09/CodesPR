#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("El;ements of the array are : \n ");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter the Number of Elements:  \n");
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the Values :  \n");

    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iCount);

    free(ptr);

    return 0;
}