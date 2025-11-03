// Write a program which accept radius of circle from user and calculate its area. Consider value of PI 3.14.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CircleArea
// Description:   Used to print area.
// Input:         float
// Output:        double
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the Number\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %f",dRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5.3                  
// Output: 88.2026
//
// Input: 10.4                   
// Output: 339.6224
//
///////////////////////////////////////////////////////////////////////////////////