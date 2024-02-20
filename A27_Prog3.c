

#include <stdio.h>

void strtogglex(char *str)
{
    int iCnt = 0 ;
    while(str[iCnt] != '\0')
  {
    if(str[iCnt]>='a' && str[iCnt]<='z')
    {
      str[iCnt] = str[iCnt] - 32;
    }
    else if(str[iCnt]>='A' && str[iCnt]<='Z')
    {
      str[iCnt] = str[iCnt] + 32;
    }
    iCnt++;
  }
}

int main()
{
    char Arr[20];

    printf("Enter the String :  ");
    scanf("%[^'\n']s", Arr);

    strtogglex(Arr);
    printf("Modified String is %s\n", Arr);

    return 0;
}