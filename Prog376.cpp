                                   //    OOP  to Generic   //

using namespace std;
#include <iostream>

template <class T>
class Array
{
    public : 
    T *Arr;
    int Size;

    Array (int Length);
    ~Array ();
    void Accept ();
    void Display ();
    T Addition();
};

template <class T>
Array <T>:: Array (int Length)
    {
        Size = Length;
        Arr = new int(Size);
    }
    template <class T>
    void Array <T> :: Accept ()
    {
        cout << "Enter the elements: "<<"\n";
        int iCnt = 0;

        for (iCnt = 0; iCnt <Size ; iCnt++)
        {
            cin >>Arr[iCnt];
        }
    }
    template <class T>
    void Array <T>::  Display ()
    {
        cout << "Elements of the Array are : "<<"\n";
        int iCnt = 0;

        for (iCnt = 0; iCnt <Size ; iCnt++)
        {
            cin >>Arr[iCnt];
        }
        cout << "\n";
    }
    template <class T>
    int Array <T>:: Addition()
    {
        int Sum = 0;
        int iCnt = 0;

        for (iCnt = 0; iCnt <Size; iCnt++)
        {
            Sum = Sum + Arr[iCnt];
        }
        return Sum;
        
    }
    template <class T>
    Array ::   ~Array ()
    {
        delete [] Arr;
    }

int main()
{
    int Ret = 0;

    Array obj(5);


    obj.Accept();
    obj.Display ();
    Ret = obj.Addition();
  
    return 0;
}