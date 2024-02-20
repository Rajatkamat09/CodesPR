#include <stdio.h>    // for printf and scanf
#include <stdlib.h>   // For Malloc() and Free()

void Display (int Arr[], int iSize)     // *Arr  == Arr[]
{
    int iCnt = 0 ;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf ("Enter the number of elements:\n");
    scanf ("%d",&iCount);

    ptr = (int *) malloc(iCount * sizeof(int));

    printf ("Enter the elements : \n");

//          1           2          3
    for (iCnt= 0; iCnt < iCount; iCnt++)
    {
        scanf("%d\n",&ptr[iCnt]);    //4
    }

    Display(ptr,iCount);

    return 0 ;
}

/*
(int *) = type casting
malloc (icount * sizeof (int)) = for storing dynamic memory for given elements by user
malloc returns void*
*/