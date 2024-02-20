
#include <stdio.h>

void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
         printf("%c\t%d\t%o\t%x\t",ch,ch,ch,ch);
    }
}

int main()
{
    char cValue = 0;
    printf("Enter the Character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}