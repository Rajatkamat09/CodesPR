
#include <stdio.h>

template <class T>
void Reverse(T *arr, int iSize)
{
    for (int i = iSize - 1; i >= 0; i--)
    {
        
        printf("%d ", arr[i]);
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};

    printf("Original Array: ");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");
    printf("Reversed Array:");
    Reverse(Arr, 9);

    return 0;
}