

#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkVowel(char *str)
{

    int iCnt = 0;

    while (*str !='\0')
    {
        if ((*str =='a')|| (*str =='e')||(*str =='i')||(*str =='o')||(*str =='u'))
        {
            str++;
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{
    char Arr[20];
    BOOL bRet = 0;

    printf("Enter the String :  ");
    scanf("%[^'\n']s", Arr);

    bRet = ChkVowel(Arr);
    if (bRet == TRUE)
    {
        printf("Contains Vowel.\n");
    }
    else
    {
        printf("There is no Vowel.\n");
    }

    return 0;
}