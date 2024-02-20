#include <stdio.h>

int Counter(char str[])
{
    int iCnt =0;
    while (*str !='\0')
    {
        if (*str == '\0')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
    
int main()
{
    char Arr[20];
    int iRet= 0;

    printf("Enter the String :  \n");
    scanf("%[^'\n']s",Arr)   ;                                               

    iRet= Counter(Arr);
    printf("count of the letter is: %d\n",iRet);

    return 0;
}