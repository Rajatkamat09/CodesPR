
using namespace std;
#include <iostream>

class Array
{
private:
    int *Arr; // int Arr[] :- asa pn lihu shakato.
    int iSize;

public:
    Array(int X) // parameterized constructor.
    {
        iSize = X;
        Arr = new int[iSize];
    }
    ~Array() // destructor
    {
        delete[] Arr;
    }

    void Accept() // class madhala member function
    {
        int iCnt = 0;
        cout << "Enter the Elements: " << endl;
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }
    void Display() // he pn class madhala member function
    {
        cout << "Elememts of the Array are: " << endl;
        int iCnt = 0;
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout << Arr[iCnt] << "\t";
        }
        cout << endl;
    }
    // logics ...
    int AdditionEven()
    {
        int iSum = 0;
        int iCnt = 0;

        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            if ((Arr[iCnt] % 2) == 0)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
    }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout << "Enter the Number of the elemnts you want to store:" << endl;
    cin >> iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    iRet = aobj->AdditionEven();

    cout << "Addition of even elements is : " << iRet << endl;

    delete aobj;

    return 0;
}