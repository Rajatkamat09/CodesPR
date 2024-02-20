#include <stdio.h>

float CalculatePercentage(float Marks, float OutOf)
{
    auto float fPercentage = 0.0f;

    if ((Marks < 0) || (OutOf < 0) || (Marks > OutOf))      // Filter
    {
        printf("Invalid Input \n");
        return fPercentage;
    }

    fPercentage = ((Marks / OutOf) * 100);

    return fPercentage;
}

int main()
{
    auto int iMarksObtained = 0;
    auto int iOutOf = 0;
    auto float fTotal = 0.0f;

    printf("Marks obtained are  : ");
    scanf("%d", &iMarksObtained);

    printf("Total Marks : ");
    scanf("%d", &iOutOf);

    fTotal = CalculatePercentage(iMarksObtained, iOutOf);
    printf("Your Percentage is  : %f\n", fTotal);

    return 0;
}