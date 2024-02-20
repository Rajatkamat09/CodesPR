#include <stdio.h>

void Display_Class(float fMarks)
{
    if((fMarks < 0.00) || (fMarks>100))
    {
        printf("Invalid Input...\n");
    }

    if ((fMarks >= 0.0) && (fMarks <= 34.999))
    {
        printf("You are Failed \n");
    }

    else if ((fMarks >= 35.00) && (fMarks <= 49.999))
    {
        printf("Your Class is Pass Class \n");
    }
    else if ((fMarks >= 50.00) && (fMarks <= 59.999))
    {
        printf("Your Class is 2nd Class \n");
    }
    else if ((fMarks >= 60.00) && (fMarks <= 74.999))
    {
        printf("Your Class is 1st Class \n");
    }
    else if ((fMarks >= 75.00) && (fMarks <= 100.000))
    {
        printf("Your Class is 1st Class with Distinction \n");
    }
}

int main()
{
    auto float fMarks = 0.0f;

    printf("Enter you Percentage  : ");
    scanf("%f", &fMarks);

    Display_Class(fMarks);

    return 0;
}