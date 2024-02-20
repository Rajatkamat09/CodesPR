

#include <stdio.h>

void Display(char ch)
{
    char iCnt = '\0';
    // int iCtn = 0;

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        for (iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t ", iCnt);
        }
        printf("\n");
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        for (iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c \t", iCnt);
        }
        printf("\n");
    }
    else
    {
        printf("%c \n",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the Character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}