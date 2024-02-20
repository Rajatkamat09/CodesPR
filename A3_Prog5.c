#include <stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

int ChkVowel(char Value1)

{
    if (Value1 ==  )
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
    BOOL bRet = FALSE ;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("It is not a Vowel\n");
    }
    
    return 0;
}