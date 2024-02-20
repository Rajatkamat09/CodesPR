// Problem Statement : Accept 2 values from user and perform the addition.

//Step1 : Understand the problem statement
// conclusion :  we have to accept 2 integers and perform its addition.

// step2 : write the algorithm
/*
    START

    1.   Accept first number from user and store it in no1.
    2.   Accept second number from user and store it in no2.
    3.   Create 1-variable to store the result named as Answer.
    4.   Perfrom the addition of no1 and no2 and store the result in Ans.
    5.   Display the result from Ans to the user.


    STOP
*/
// Step 3 : Decide the programming Language  [c,c++,java,python]
//      We select the C- programming language

// Step 4 : Write the programm using C.

#include <stdio.h>

int main()
{
    int a,b,c ;
    printf("Enter 1st no : \n");
    scanf("%d",&a);

    printf("Enter 1st no : \n");
    scanf("%d",&b);

    c= a+b;

    printf("Addition is : %d\n",c);


    return 0 ;
}
