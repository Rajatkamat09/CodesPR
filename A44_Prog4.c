
#include <stdio.h>

template <class T>
T Max (T *arr ,int iSize)
{
    T iCnt = 0;
    T Maxi =arr[0] ; 
    for (iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if (arr[0] > Maxi)
        {
            Maxi = arr[iCnt];
        }
    }
    return Maxi;
    
    
}
int main()
{
    int arr[] ={10,20,30,40,50};
    float brr[] = {10.0 ,3.7 , 9.8 , 8.7};

    int iRet = Max( arr, 5);
    printf("%d\n",iRet);   // 50

    float fRet = Max( brr, 4);
    printf("%f\n",fRet);  // 9.8

    return 0 ;
}
