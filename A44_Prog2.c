
#include <stdio.h>

template <class T>
T Max (T no1 , T no2 , T no3)
{
    if ((no1 > no2) && (no1>no3))
    {
        return no1;
    }
    else if ((no2>no1 ) && (no2>no3))
    {
        return no2;
    }
    else
    {
        return no3;
    }
}
int main()
{
     int iValue1 = 10 , iValue2 = 20 ,iValue3 = 30, iRet = 0;
    float fValue1 = 10.0f , fValue2 = 20.0f ,fValue3 = 30.0f, fRet = 0.0f;

    iRet = Max (10, 20, 30);
    printf("Maximum number is : %d\n",iRet);

    fRet = Max(10.0f ,20.0f, 30.0f);
    printf("Maximum number is : %f\n",fRet);

    return 0 ;
}
