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

    int Factorial ()
    {
        int iCnt = 0;
        int iFact = 1;

        for (iCnt = 1; iCnt <=iNo; iCnt++)
        {
            iFact = iFact*iCnt;
        }
        return iFact;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the Number:" << endl;
    cin>>iValue;

    Number nobj(iValue);

    iRet = nobj.Factorial();

    cout<<"Factorial is: "<<iRet<<endl;


    return 0;
}