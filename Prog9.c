#include <stdio.h>

long int Calculate_Cube (int value)
{
    auto int iCube = 0;

    iCube = value * value* value; 
    return iCube;
}
int main()
{
    auto int iValue = 0;
    auto long int iAns = 0;

    printf("Enter The number : ");
    scanf("%d",&iValue);

    iAns = Calculate_Cube (iValue);
    printf("Cube is : %ld\n",iAns);

    return 0;
}