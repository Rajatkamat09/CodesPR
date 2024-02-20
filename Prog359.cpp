                                 //  Generic Prog 1  //
using namespace std;

#include <iostream>

template <class T>                            // Reference Holder  
                                             // class word for - object oriented template variable.
T Addition(T No1, T No2)
{
    T Ans = 0.0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    double Value1 = 10.9;
    double Value2 = 11.6, Ret = 0.0;

    Ret = Addition(Value1, Value2);

    cout << "Addition is : " << Ret << "\n";

    return 0;
}