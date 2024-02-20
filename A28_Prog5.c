
#include <stdio.h>
#include <string.h>

void StrRevX(char *str)
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
    char cValue = '\0';

    printf("Enter the String :  \n");
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr);
    printf("Modified String is :%s \n", Arr);

    return 0;
}
