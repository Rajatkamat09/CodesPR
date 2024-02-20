#include <stdio.h>    // for printf and scanf
#include <stdlib.h>   // For Malloc() and Free()

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf ("Enter the number of elements:\n");
    scanf ("%d",&iCount);

    ptr = (int *) malloc(iCount*sizeof(int));

    printf ("Enter the elements : \n");

//          1           2          3
    for (iCnt= 0; iCnt < iCount; iCnt++)
    {
        scanf("%d\t",&ptr[iCnt]);    //4
    }
    

    printf("Your entered elements are  : \n");

//            1            2         3  
    for ( iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);  //4
    }
    
    printf ("\n");
    
   
   
   /*
    scanf("%d",&ptr[0]);
    scanf("%d",&ptr[1]);
    scanf("%d",&ptr[2]);
    scanf("%d",&ptr[3]);
   */

    return 0 ;
}

/*
(int *) = type casting
malloc (icount * sizeof (int)) = for storing dynamic memory for given elements by user
malloc returns void*
*/