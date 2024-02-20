

#include<stdio.h>


double CircleArea(float fRadius)
{
    float pi = 3.14;
    float Area = pi *fRadius*fRadius;
    return Area;

}
int main()
{
    auto float fValue = 0.0f;
    
    auto float fArea = 0.0f;

    printf("Enter the value of Radius :");
    scanf("%f",&fValue);

    fArea = CircleArea(fValue);

    printf("Area of Circle is : %f\n", fArea);

    return 0;

}