
template <class T>
T Max (T *arr ,int iSize)
{
     T iCnt = 0;
    T Mini =arr[0] ; 
    for (iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if (arr[0] < Mini)
        {
            Mini = arr[iCnt];
        }
    }
    return Mini;  
}
int main()
{
    int arr[] ={10,20,30,40,50};
    float brr[] = {10.0 ,3.7 , 9.8 , 8.7};

    int iRet = Max(arr, 5);
    printf("%d",iRet);   // 10

    float fRet = Max(brr, 4);
    printf("%f",fRet);  // 3.7

    return 0 ;
}
