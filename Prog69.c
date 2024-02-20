#include <stdio.h>
#include <stdlib.h>

int OddCount(int Arr[], int iSize)  
{                                 
    int iCnt = 0;
    int iOddCnt = 0;

    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 2) != 0)
        {
            iOddCnt++;
        }
        
    }
    return iOddCnt ;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the Number of Elements:  \n");
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic Memory gets allocated sucessfully for %d elements \n ", iCount);

    printf("Enter the %d values : \n ",iCount);

//            1          2          3
    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\n Enter the element no.%d:   ",iCnt+1);
        scanf("%d", &ptr[iCnt]);   //  4
    }

    iRet = OddCount(ptr, iCount);   //  Display (100 , 4)
    printf(" Number of Odd elements are :  %d\n",iRet);


    free(ptr); // free (100)

    // printf("Dynamic memory gets de-allocated successfully \n");

    return 0;
}