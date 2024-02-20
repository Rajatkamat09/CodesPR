using namespace std;
#include <iostream>

class String
{
    private:
        char *str;
        int iSize;


    public:
        String()
        {
            iSize = 20;
            str = new char[30];
        }

        String(int X)
        {
            iSize = X;
            str = new char[iSize];
        }

        ~String()
        {
            delete []str;
        }
        void Accept()
        {
            cout<<"Enter ethe String :  "<<endl;
            
            cin.getline(str, iSize)
        }
        void Display()
        {
            cout<<"The String is:  "<<endl;
        }

        //Logic...

};

int main()
{

    String sobj(30);

    sobj.Accept();
    sobj.Display();

    return 0;
}