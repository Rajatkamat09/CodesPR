

#include <stdio.h>

void Display(char ch)
{
    char cConv ='\0';

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        cConv = ch -'a';
        printf("Corresponding Small Letter is: %c\n",ch-'A');
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        cConv = ch -'A';
        printf("Corresponding Capital Letter is: %c\n",ch -'a');
    }
    else
    {
        printf("%c",cConv);
    }
}
int main()
{
    char cValue = 0 ;
    printf("Enter the Character: ");
    scanf("%c",&cValue);
    
    Display(cValue);

    return 0;
}