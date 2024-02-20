
#include <stdio.h>

double RectArea(float fWidth,float fHeight)
{
    float fArea = fWidth * fHeight;
    return fArea;
}
int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;

    double dRet = 0.0;

    printf("Enter the Width : ");
    scanf("%f",&fValue1);

     printf("Enter the Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf("Area of the Rectangle is : %f\n",dRet);

    return 0 ;
}