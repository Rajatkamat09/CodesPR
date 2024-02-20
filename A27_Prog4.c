
#include <stdio.h>

void DisplayDigit(char *str)
{
  int iCnt = 0;

  while (str[iCnt] != '\0')
  {
    iCnt++;
  }
}

int main()
{
  char Arr[20];

  printf("Enter the String :  ");
  scanf("%[^'\n']s", Arr);

  DisplayDigit(Arr);
  printf("Modified String is %s\n", Arr);

  return 0;
}