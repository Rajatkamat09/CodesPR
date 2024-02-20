using namespace std;
#include <iostream>

class Pattern
{
    private:
    int iRow;
    int iCol;

    public :
        Pattern (int X, int Y)
        {
            iRow =X;
            iCol =Y;
        }

        void Display()
        {
            // logic
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the number of rows:"<<endl;
    cin>>iValue1;
    cout <<"Enter the number of colums:"<<endl;
    cin>>iValue2;

    Pattern pobj(iValue1,iValue2);
    pobj.Display();


    return 0;
}