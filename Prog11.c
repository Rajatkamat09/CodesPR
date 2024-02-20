#include <stdio.h>

float CalculatePercentage (float Marks,float OutOf)
{
    float fTotal = 0.0f;
    
    fTotal= ((Marks /OutOf)*100);

    return fTotal;

}


int main()
{
    auto int iMarksObtained = 0;
    auto int iOutOf = 0;
    auto float fTotal = 0.0f ;

    printf("Marks obtained are  : ");
    scanf("%d",&iMarksObtained);

    printf("Total Marks : ");
    scanf("%d",&iOutOf);

    fTotal = CalculatePercentage(iMarksObtained,iOutOf);
    printf ("Your Percentage is  : %f\n",fTotal);

    return 0 ;
}