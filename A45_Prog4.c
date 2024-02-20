
#include <stdio.h>

template <class T>

int SearchLast(T *arr , int iSize , T iNo)
{
    int Search = 0;
    for (int i = 0; i < iSize; i++)
    {
        if (arr[i] == iNo)
        {
            Search = i;
        }        
    }
    return Search;
}
int main()
{
   int Arr[] = {10,20,30,10,30,40,10,40,10};
   int iRet = SearchLast (Arr, 9 , 40);

   printf("%d\n",iRet); //8
   
    return 0;
}