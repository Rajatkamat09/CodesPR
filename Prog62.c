#include <stdio.h>
#include <stdbool.h>



bool ChckPalindrome(int iNo)
{
    int iCopy = iNo;   // copy kadli iNo chi. jar copy nai kela tr else block madhe jaata te.
    int iRev = 0 ;
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo %10 ;
        iNo = iNo /10 ;
        iRev = (iRev * 10)+ iDigit ;
    }
    return (iRev == iCopy);

      /*if (iRev == iCopy)
    {
        return true ;
    }
    else
    {
        return false ;
    }

      */ 
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf ("Enter the Number :  ");
    scanf("%d",&iValue);

    bRet = ChckPalindrome (iValue);
    if (bRet == true)
    {
        printf("%d is Palindrome number \n",iValue);
    }
    else{
        printf("%d is not a Palindrome number\n",iValue);
    }
    
    return 0 ;

}