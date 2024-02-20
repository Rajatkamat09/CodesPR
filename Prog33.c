#include <stdio.h>

void Display( int iSize)
{
    int iCnt = 0;
   
    //         1         2          3
    for (iCnt = 1; iCnt <= iSize; iCnt++)    // index 2 = here is a not hardcoded value. 
    {
        printf("Jay Ganesh.....\n");
    }
}
int main()
{
    Display(4);

    return 0;
}