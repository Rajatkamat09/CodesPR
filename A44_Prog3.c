

#include <stdio.h>

template <class T>
T AddN (T *arr ,int iSize)
{
    T sum = 0;

    int i = 0;
    // fileter
    for ( i = 0; i < iSize; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
    
}
int main()
{
    int arr[] ={10,20,30,40,50};
    float brr[] = {10.0 ,3.7 , 9.8 , 8.7};

    int iSum = AddN(arr, 5);
    printf("Addition is :%d\n",iSum);

    float fSum = AddN(brr, 4);
    printf("Addition is : %f\n",fSum);

    return 0 ;
}
