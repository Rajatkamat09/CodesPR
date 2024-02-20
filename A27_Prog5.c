
#include <stdio.h>

int CountWhite(char *str)
{
  int iCnt = 0;
  int iCount = 0;

  for (iCnt = 1; str[iCnt] != '\0'; iCnt++)
  {
    if (str[iCnt] == ' ')
    {
      iCount++;
    }
  }
  return iCount;
}

int main()
{
  char Arr[20];
  int iRet = 0;

  printf("Enter the String :  ");
  scanf("%[^'\n']s", Arr);

  iRet = CountWhite(Arr);
  printf("White spaces in String are %d\n", iRet);

  return 0;
}