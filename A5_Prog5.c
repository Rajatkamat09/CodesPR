
    
#include <stdio.h>

float Percentage(float Marks, float OutOf)
{
    float fTotal = 0.0f;

    if ((Marks == 0) || (OutOf == 0))
    {
        printf("Invalid Input......\n");
    }

    fTotal = ((Marks / OutOf) * 100);

    return fTotal;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fResult = 0.0f;

    printf("Marks obtained are  : ");
    scanf("%d", &iValue1);

    printf("Total Marks : ");
    scanf("%d", &iValue2);

    fResult = Percentage(iValue1, iValue2);
    printf("Your Percentage is  : %f\n", fResult);

    return 0;
}