
#include <stdio.h>

double FhtoCs(float fTemp)
{
    int iCel = 0;

    iCel = ((fTemp-32)*5/9) ;
    return iCel;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);
    printf("Conversion into Celcius is : %f\n", dRet);

    return 0;
}