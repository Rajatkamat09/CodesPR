
#include <stdio.h>

int Difference(char *str)
{
    int iUp = 0, iSm = 0;
    int iDiff = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iSm++;
        }
        str++;
    }
    while (*str != '\0')
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iUp++;
        }
    str++;

    iDiff = iSm - iUp;

    return iDiff;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String :  ");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);
    printf("Difference in the Letters is:  %d\n", iRet);

    return 0;
}