#include <stdio.h>
#include <stdbool.h>

bool CheckEven (int Numb)
{
    if ((Numb / 2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }

}

int main()
{
    int iNumber = 0;
    bool bResult = false;

    printf("Enter the Number : ");
    scanf("%d",&iNumber);

    bResult = CheckEven (iNumber);

    if(bResult == true)
    {
        printf("%d is an even number \n",iNumber);
    }
    else
    {
         printf("%d is an odd number \n",iNumber);
    }

    return 0;
}