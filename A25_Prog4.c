
#include <stdio.h>
#include <stdbool.h>

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if ((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character: ");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);
    if (bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is Not A special Character");
    }

    return 0;
}