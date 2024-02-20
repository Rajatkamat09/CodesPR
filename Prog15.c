#include <stdio.h>

void DisplayExamTime(int iStandard)
{
    switch (iStandard)
    {
    case 1:
        printf("Your Exam is at 8 AM \n");
        break;
    case 2:
        printf("Your Exam is at 9 AM \n");
        break;
    case 3:
        printf("Your Exam is at 10 AM \n");
        break;
    case 4:
        printf("Your Exam is at 11 AM \n");
        break;
    case 5:
        printf("Your Exam is at 12 NOON \n");
        break;

    default:
        printf("Invalid Input....\n");
        break;
    }
}

int main()
{
    auto int iDivision = 0;

    printf("Enter your Division : ");
    scanf("%d", &iDivision);

    DisplayExamTime(iDivision);

    return 0;
}