
#include <stdio.h>

template <class T>

int Frequency(T *arr , int iSize , T iNo)
{
    T Freq = arr[0];
    for (int i = 0; i < iSize; i++)
    {
        if (arr[i] == iNo)
        {
            Freq = Freq + 1;
        }        
    }
        return Freq;
}
int main()
{
   int Arr[] = {10,20,30,10,30,40,10,40,10};
   int iRet = Frequency (Arr, 9 , 10);

   printf("%d\n",iRet); //4
   
    return 0;
}