#include <stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the character :  ");
    scanf("%c",&ch);

    printf("ASCII value of the Character in Decimal is :  %d\n",ch);
    printf("ASCII value of the Character in Octal is :  %o\n",ch);
    printf("ASCII value of the Character in Hexadecimal :  %x\n",ch);
    return 0 ;

}