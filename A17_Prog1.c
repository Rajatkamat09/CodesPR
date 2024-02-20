

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char cPrint = 'A';

    for (iCnt = 0; iCnt <iNo; iCnt++)
    {
        if ((iCnt >= 0 ) && (iCnt <= 26))
        {
            printf("%c\t",cPrint+iCnt);
        }
        
        
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : "); 
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
