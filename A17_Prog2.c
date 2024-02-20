

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iPrint = 0;

    for (iCnt =iNo ; iCnt >=1; iCnt--)
    {
        if ((iCnt >= 0 ) && (iCnt <= 26))
        {
            printf("%d # \t",iPrint+iCnt);
        }
    }
    
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter the Number of Elements ");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}
