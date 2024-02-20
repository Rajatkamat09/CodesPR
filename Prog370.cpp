//      OOP to Generic       //

using namespace std;
#include <iostream>

template <class T>

class Arithmatic
{
public:
    T No1;
    T No2;

    Arithmatic(T A, T B);
    T Addition();
    T Subtraction();
};

/* Retrun_value  Class_name :: Function_name(Parameters)
e.g,   int         Arithmatic :: Addition()
    {

    }
*/
template <class T>
Arithmatic <T> ::Arithmatic(T A, T B)
{
    this->No1 = A;
    this->No2 = B;
}
template <class T>
T Arithmatic <T> ::Addition()
{
    T Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
template <class T>
T Arithmatic <T> ::Subtraction()
{
    T Ans = 0;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    int iRet = 0;
    Arithmatic <int>Aobj1(11, 10);

    iRet = Aobj1.Addition();
    cout << "Addition is : " << iRet << "\n";

    iRet = Aobj1.Subtraction();
    cout << "Subtraction is : " << iRet << "\n";

////////////////////////////////////////////////////////

    float fRet = 0.0;
    Arithmatic <float>Aobj2(11.8, 10.9);

    fRet = Aobj2.Addition();
    cout << "Addition is : " << fRet << "\n";

    fRet = Aobj2.Subtraction();
    cout << "Subtraction is : " << fRet << "\n";

    return 0;
}