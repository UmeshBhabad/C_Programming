// Write a program which accept area in square feet from user and convert it into square meter ( 1 square feet = 0.0929 Square meter).

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: SquareMeter
// Description:   Used to Convert square feet to square meter.
// Input:         Integer
// Output:        double
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double SquareMeter(int iNo)
{
    return iNo * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%f", dRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                 
// Output: 0.464500
//
// Input: 7                   
// Output: 0.650300
//
///////////////////////////////////////////////////////////////////////////////////