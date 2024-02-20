
#include <stdio.h>

typedef unsigned int UINT;

void CommomBits(UINT iNo1, UINT iNo2)
{
    int cBits = iNo1 & iNo2; 

    printf("Common set bits positions: ");
    int iPos = 0;

    
    while (cBits)
    {
       
        if (cBits & 1)
        {
            printf("%d ", iPos + 1); 
        }
        cBits >>= 1;
        iPos++;
    }

    printf("\n");
}

int main()
{
    int iNum1 = 0;
    int iNum2 = 0;

    printf("Enter the Number1 : ");
    scanf("%d", &iNum1);

    printf("Enter the Number2 : ");
    scanf("%d", &iNum2);

    CommomBits(iNum1, iNum2);

    return 0;
}
