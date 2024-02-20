// I/P = 4
// O/P = a b c d

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char Ch = 'a';
    //      1           2          3
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", Ch);
        Ch++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number  :  ");

    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}