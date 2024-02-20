// Problem Statement : Accept 2 values from user and perform the addition.

// Step1 : Understand the problem statement
//  conclusion :  we have to accept 2 integers and perform its addition.

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
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iAns = 0;

    printf("Enter 1st no : \n");
    scanf("%d", &iValue1);

    printf("Enter 1st no : \n");
    scanf("%d", &iValue2);

    iAns = iValue1 + iValue2;

    printf("Addition is : %d\n", iAns);

    return 0;
}
/*

Step 5 : Test the Code.

Test case 1 : 
I/P = 10 , 12
O/p = 22

Test case 1 : 
I/P = -10 , 12
O/p = 2

Test case 2 : 
I/P = 10 , -12
O/p = -2

Test case 3 : 
I/P = -10 , -12
O/p = -22

*/