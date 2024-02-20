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
            
            cin.getline(str, iSize);
        }
        void Display()
        {
            cout<<"The String is:  "<<endl;
        }

        int CountCapital()
        {
            int iCnt = 0;
            while ((*str >='A') && (*str <='Z'))
            {
                iCnt++;
            }
            return iCnt;
        }

};

int main()
{

    String *sobj = new String(30);

    int iRet = 0;

    sobj->Accept();
    sobj->Display();

    iRet = sobj->CountCapital();
    cout<<"capital count is:"<<iRet<<endl;
    sobj->Display();
   // delete sobj;

    return 0;
}