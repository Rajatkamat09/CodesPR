
#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNO, int iPos)
{
    unsigned int fNibble = 0;
    unsigned int lNibble = 0;
   
    fNibble = (iNO >> iPos) & 0xF;
    lNibble = (iNO & 0xF) << iPos;

    iNO = iNO ^(fNibble << iPos) ^ lNibble;

    return iNO;
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

    iRet = ToggleBit(iNum, iPost);
    printf("Modified number is: %u\n", iRet);

    return 0;
}
