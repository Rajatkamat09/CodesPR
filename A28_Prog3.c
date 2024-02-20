
#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    for (iCnt = 1; str[iCnt] != '\0'; iCnt++)
    {
        if (str[iCnt] == ch)
        {
            return iCnt;
        }
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String :  \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character: \n");
    scanf("%s", &cValue);

    iRet = FirstChar(Arr, cValue);
    printf("Character location is %d.\n", iRet);

    return 0;
}
