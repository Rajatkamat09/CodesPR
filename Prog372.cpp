// without OOP    //

using namespace std;
#include <iostream>

int Addition(int Arr[], int Length)
{
    int Sum = 0, iCnt = 0;

    for (iCnt = 0; iCnt < Length; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Size = 0, iCnt = 0, Ret = 0;
    int *ptr = NULL;

    // Step 1:
    cout << "Enter number of elements : "
         << "\n";
    cin >> Size;
    // Step 2:
    ptr = new int(Size);

    // Step 3:
    cout << "Enter the Elements :"
         << "\n";

    for (iCnt = 0; iCnt < Size; iCnt++)
    {
        cin >> ptr[iCnt];
    }
    // Step 4: Function call

    Ret = Addition(ptr, Size);
              cout<< "Addition of all elements is : " << Ret << "\n";

    cout << "Elements of the Array are : \n";

    for (iCnt = 0; iCnt < Size; iCnt++)
    {
        cout << ptr[iCnt] << "\t";
    }

    // Step 5 : Deallocte memory
    delete [] ptr;

    return 0;
}