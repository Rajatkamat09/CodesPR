

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iConv = 0;

    iConv = iNo *1000;
    return iConv;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
     printf("Enter the Kilometers :");
     scanf("%d",&iValue);

    iRet =  KMtoMeter(iValue);
    printf("Conversion into Meters are : %d\n",iRet);

    return 0 ;
}