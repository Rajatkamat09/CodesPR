

#include <stdio.h>

void Reverse(char *str)
{

   int ilength = strlen(str);
    int iStart = 0;
    int iEnd = ilength -1;
    char ch = '\0';

    while (iStart <iEnd)
    {
        ch = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = ch;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String :  ");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    return 0;
}