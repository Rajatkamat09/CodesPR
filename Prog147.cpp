using namespace std;
#include <iostream>

class Number
{
private:
    int iNo;

public:
    Number(int x)
    {
        iNo = x;
    }

    //logic  ithun khali yetil...
};

int main()
{
    int iValue = 0;

    cout << "Enter the Number:" << endl;
    cin>>iValue;

    Number nobj(iValue);

    return 0;
}