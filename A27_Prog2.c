

#include <stdio.h>

void struprx(char *str)
{
      while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter the String :  ");
    scanf("%[^'\n']s", Arr);

    strlwrx(Arr);
    printf("Modified String is %s",Arr);

    return 0;
}