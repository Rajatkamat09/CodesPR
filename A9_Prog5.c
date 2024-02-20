
#include <stdio.h>

double SquareMeter(float fNo)
{
    float fSquare = 0.0f;

    fSquare = fNo * 0.0929 ;
    return fSquare;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Square foot : ");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);
    printf("Conversion into Square meter is : %f\n", dRet);

    return 0;
}