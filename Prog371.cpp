                                // without OOP    //

using namespace std;
#include <iostream>

int main()
{
    int Size = 0, iCnt = 0;
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

    cout << "Elements of the Array are : \n ";

    for (iCnt = 0; iCnt < Size; iCnt++)
    {
        cout << ptr[iCnt];
    }

    // Step 5 : Deallocte memory
    delete [] ptr;

    return 0;
}