using namespace std;
#include <iostream>

class Arithmatic
{
public:
    int No1;
    int No2;

    Arithmatic(int A, int B);
    int Addition(); 

};

/* Retrun_value Class_name :: Function_name(Parameters)
    {

    }
*/
Arithmatic :: Arithmatic(int A, int B)
    {
        this->No1 = A;
        this->No2 = B;
    }
int Arithmatic :: Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }


int main()
{
    int iRet = 0;
    Arithmatic Aobj1(11, 10);

    iRet = Aobj1.Addition();
    cout << "Addition is : " << iRet << "\n";
    return 0;
}