
#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iPro = 1;

    for (iCnt = 0; iCnt <iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) != 0)
        {
            iPro = iPro *Arr[iCnt];
        }
    }
    return iPro;
    
}

int main()
{
    int iSize = 0, iCnt = 0 ;
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
    iRet = Product(p, iSize);
    printf("Product is:  %d\n",iRet);
    
    free(p);

    return 0;
}
