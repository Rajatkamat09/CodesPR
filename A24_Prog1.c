
#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch >= 'A') && (ch<= 'Z'))
    {
        return TRUE;
    }
    else if ((ch >='a') && (ch <='z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE ;
    }
     
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character :  ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);
    if (bRet == TRUE)
    {
        printf("It is a Character.\n");
    }
    else
    {
        printf("It is not a Character.\n");
    }

    return 0;
}