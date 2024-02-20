
#include<stdio.h>

void Display(int No)
{
    char Words[] = {
        'Zero','One', 'Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine'
    };
    
    // if (No >= 0 && No <= 9) {
    //     printf("Number is : %s\n", Words[No]);
    // } else {
    //     printf("Please enter a number between 0 and 9.\n");
    // }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number :  ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}