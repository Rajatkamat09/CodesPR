#include <stdio.h>

int main()
{
    char Arr[20];
    char cRet = '\0';

    printf("Enter the String :  \n");
     //gets(Arr);
    scanf("%[^'\n']s",Arr)   ;                                               

    printf("Entered String is: %s\n", Arr);

    return 0;
}