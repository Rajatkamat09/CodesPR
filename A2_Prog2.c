#include <stdio.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*\t");
        iNo--;
    }
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;
}