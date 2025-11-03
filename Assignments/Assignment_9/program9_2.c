// Accept amount in USD and return its corresponding value in INR.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:   Used to print Pattern.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DollerToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 10                   
// Output: 700
//
// Input: 3                   
// Output: 210
//
// Input: 1200                   
// Output: 84000
//
///////////////////////////////////////////////////////////////////////////////////