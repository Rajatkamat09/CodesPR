
#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char ch)
{
    if ((ch == 'A') || (ch == 'a'))
    {
        printf("YOur Exam time is : 7 AM");
    }
    else if ((ch == 'B') || (ch == 'b') )
    {
        printf("YOur Exam time is : 8.30 AM");
    }
    else if ((ch == 'C')|| (ch == 'c'))
    {
        printf("YOur Exam time is : 9.20 AM");
    }
    else if ((ch == 'D') || (ch == 'd'))
    {
        printf("YOur Exam time is : 10.30 AM");
    }
    else
    {
        printf("Incorrect Divison.Please Enter Your Division");
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character :  ");
    scanf("%c", &cValue);

    bRet = DisplaySchedule(cValue);

    return 0;
}