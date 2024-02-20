

#include <stdio.h>

void Range(int Arr[], int iLength, int iStart,int iEnd)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt <iLength; iCnt++)
    {
        if ((Arr[iCnt])>= iStart && (Arr[iCnt])<= iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0 ;
    int iValue1 = 0 , iValue2 = 0;
    int *p = NULL;

    printf("Enter the Number of Elements : ");
    scanf("%d", &iSize);

    printf("Enter the Starting point : ");
    scanf("%d", &iValue1);

     printf("Enter the Ending point : ");
    scanf("%d", &iValue2);

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
    Range(p, iSize,iValue1,iValue2);
    
    free(p);

    return 0;
}
