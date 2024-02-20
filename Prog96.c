/*
 *  *  *  *
 *  *  *  *
 *  *  *  *
 */

#include <stdio.h>

void Display(int iNo)
{
    int iRow = 0;
    int iColoum = 0;
    
    for ( iRow = 1; iRow <=3 ; iRow++)
    {
        for ( iColoum = 1; iColoum <=4; iColoum++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    
   
}

int main()
{
    int iNo = 0 ;

    Display(iNo);
    return 0;
}