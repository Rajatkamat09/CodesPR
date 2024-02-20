using namespace std;

#include <iostream>

template <class T>

void Swap(T &No1, T &No2)
{
    T Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}

int main()
{
    int iValue1 = 10;
    int iValue2 = 20 ;

    float fValue1 = 11.2;
    float fValue2 = 20.6 ;

    double dValue1 = 10.9;
    double dValue2 = 20.6 ;

    cout<< "Value of iValue1 : " << iValue1 << "\n";
    cout << "Value of iValue2 : " << iValue2 << "\n";

    cout<< "Value of fValue1 : " << fValue1 << "\n";
    cout << "Value of fValue2 : " << fValue2 << "\n";

    cout<< "Value of dValue1 : " << dValue1 << "\n";
    cout << "Value of dValue2 : " << dValue2 << "\n";

    Swap(Value1, Value2);

    cout<<"//////////////////////////////////////////////////////////////////////////"<<"\n";

    cout << "Value of iValue1 : " << iValue1 << "\n";
    cout << "Value of iValue2 : " << iValue2 << "\n";

    cout<< "Value of fValue1 : " << fValue1 << "\n";
    cout << "Value of fValue2 : " << fValue2 << "\n";

    cout<< "Value of dValue1 : " << dValue1 << "\n";
    cout << "Value of dValue2 : " << dValue2 << "\n";

    return 0;
}