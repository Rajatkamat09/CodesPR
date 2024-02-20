// Problem Statement : Accept 2 values from user and perform the |addition.| <--Logic


// Step1 : Understand the problem statement properly.
//  conclusion :  we have to accept 2 integers and perform its addition.

// step2 : write the algorithm.
/*
    START

    1.   Accept first number from user and store it in no1.
    2.   Accept second number from user and store it in no2.
    3.   Create 1-variable to store the result named as Answer.
    4.   Perfrom the addition of no1 and no2 and store the result in Ans.
    5.   Display the result from Ans to the user.


    STOP
*/
// Step 3 : Decide the programming Language  [c,c++,java,python].
//      We select the C- programming language.

// Step 4 : Write the programm using C.


//  Addition is a function which accepts 2 parameters as integers and it returns integer.
/////////////////////////////////  Function-Header  ///////////////////////////////////////////////////////////
//  
//  Function Name    : Addition.
//  Description      : It is used to perform Addition of 2 integers.
//  Input Arguments  : Integer, Integer.
//  Output           : Integer.
//  Author           : Rajat Nitin Kamat.
//  Date             : 25th Sept 2023.
//
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Addition(int iNo1, int iNo2)       
{
    int iSum = 0;    //  Variable to store the value of addition

    iSum = iNo1 + iNo2;
    return iSum ;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point FUnction of an application which performs addition of 2 integers
//
////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    auto int iValue1 = 0;       //Variable to store 1st input.
    auto int iValue2 = 0;       //Variable to store 2nd input.
    auto int iAns = 0;          //Variable to store  the result.

    printf("Enter 1st no : \n");
    scanf("%d", &iValue1);

    printf("Enter 1st no : \n");
    scanf("%d", &iValue2);

    iAns = Addition(iValue1 , iValue2);     // Function call to perform the addition.

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