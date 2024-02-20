// Problem Statement : Accept Radius from user and calculate the Area of Circle

// Step1 : Understand the Problem Statement Properly.
// Conclusion : We are going to use the formula as Pi*R*R.

// Step2 : Algorithm
/*
    START

        Accept radius from the user and store it in Variable as Radius.
        create a variable to store the value of Pi as 3.14.
        Create a variable to store the result as Area.
        Apply the Formula to the given variables.
        Display the result from Area to the user.
         
    STOP
*/ 

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Calculate_Area.
//  Description      : It is used to calculate area of a circle.
//  Input Arguments  : Float, Float.
//  Output           : Float.
//  Author           : Rajat Nitin Kamat.
//  Date             : 2nd Oct 2023.
//

#include <stdio.h>

#define Pi 3.14

float Calculate_Area (float Radius)
{
    //auto const float fPi= 3.14f;
    auto float Area = Pi*Radius*Radius;
    return Area;
}

float main()
{
    auto float fRadius = 0.0f;
    
    auto float fArea = 0.0f;

    printf("Enter the value of Radius :");
    scanf("%f",&fRadius);

    fArea = Calculate_Area(fRadius);

    printf("Area of Circle is : %f\n", fArea);


    return 0;
}