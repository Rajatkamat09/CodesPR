using namespace std;

#include <iostream>

void Swap(double &No1, double &No2)
{
    double Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}

int main()
{
    double iValue1 = 10.9;
    double iValue2 = 20.6 ;

    cout<< "Value of iValue1 : " << iValue1 << "\n";
    cout << "Value of iValue2 : " << iValue2 << "\n";

    Swap(iValue1, iValue2);

    cout << "Value of iValue1 : " << iValue1 << "\n";
    cout << "Value of iValue2 : " << iValue2 << "\n";

    return 0;
}