/*
    1 1 1 1
    1 1 1 1
    1 1 1 1
 */

#include <stdio.h>

void Display(int iRow ,int iCol)
{
    int iRo = 0;
    int iColoum = 0;
    
    for ( iRo = 1; iRo <=iRow ; iRo++)
    {
        for ( iColoum = 1; iColoum <=iCol; iColoum++)
        {
            printf("1\t");
        }
         printf("\n");
    }
   
   
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0 ;
    printf("Enter the number of rows:   ");
    scanf("%d",&iNo1);

    printf("Enter the number of colums:   ");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);

    return 0;
}