

#include <stdio.h>

void Pattern(int iRow , int iCol)
{
     int iRo = 0;
    int iColoum = 0;
    
    for ( iRo = 1; iRo <= 4 ; iRo++)
    {
        for ( iColoum = 1; iColoum <= 3; iColoum++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    
   
}

int main()
{
    int iValue1= 0, iValue2 = 0;

    printf("Enter the Number of Rows:  ");
    scanf("%d",&iValue1);

    printf("Enter the Number of Coloums:  ");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);
    
    return 0;
}
