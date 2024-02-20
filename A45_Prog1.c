
#include <stdio.h>

template <class T>

void Display(T value , int iSize)
{
     for (int i = 0; i < iSize; i++)
    {
        printf("%d\t", value);
        printf("\n");
        printf("%c\t", static_cast<char>(value));
        printf("\n");
        printf("%f\t", static_cast<float>(value));
        printf("\n");
    }
}
int main()
{
    Display (11 , 3);
    Display ( 'M' , 7);
    Display ( 3.7f , 6);

    return 0;
}

