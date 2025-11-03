// Write a program which accept one Number & print numbers till that number on screen.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:   Used to print Numbers.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 8                   
// Output: 1    2   3   4   5   6   7   8
//
///////////////////////////////////////////////////////////////////////////////////