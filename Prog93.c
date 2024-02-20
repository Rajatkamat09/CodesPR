// I/P = 4
// O/P = a b c d
//                      better loop than prog92.c || values taken are dynamic. 
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char Ch = '\0';
    //      1         2        3
    for (iCnt = 1 ,Ch ='a'; iCnt <= iNo; iCnt++, Ch++)
    {
        printf("%c\t", Ch);
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