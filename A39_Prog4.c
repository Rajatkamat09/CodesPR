
#include <stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNO, int iPos)
{
    unsigned int iMask = (1 << iPos);
    return (iNO | iMask);
}

int main()
{
    int iNum = 0;
    unsigned int iPost = 0; 
    unsigned int iRet = 0;

    printf("Enter the Number : ");
    scanf("%u", &iNum);

    printf("Enter the Position : ");
    scanf("%u", &iPost); 

    iRet = OnBit(iNum, iPost);
    printf("Modified number is: %u\n",iRet);

    return 0;
}


