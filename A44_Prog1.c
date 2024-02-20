
#include <stdio.h>

template<class T>

T Multiply (T no1 , T no2)
{
    T ans = 0.0;
    ans = no1 + no2;
    return ans;
}
int main()
{
    int iValue1 = 10 , iValue2 = 20 , iRet = 0;
    float fValue1 = 10.0f , fValue2 = 20.0f , fRet = 0.0f;

    iRet = Multiply(iValue1 ,iValue2);
    printf("Multiplication is : %d\n",iRet);

    fRet = Multiply(fValue1 , fValue2);
    printf("Multiplication is :%f\n",fRet);

    return 0 ;
}
