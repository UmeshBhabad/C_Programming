// Write a program which accept temperature in Fahrenheit from user and convert it into Celsius ( 1 Celsius = (Fahrenheit - 32)*(5/9)).

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: FhtoCs
// Description:   Used to Convert Fahrenheit to Celsius .
// Input:         float
// Output:        double
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32)* (5.0 / 9.0);
}

int main ()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("%f", dRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 10                  
// Output: -12.2222
//
// Input: 34                   
// Output: 1.11111
//
///////////////////////////////////////////////////////////////////////////////////