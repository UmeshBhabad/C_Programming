// Write a program which accept one Number & print its numbers line.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:   Used to print Numbers line.
// Input:         Integer
// Output:        Integers
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 4                   
// Output: -4 -3 -2 -1 0 1 2 3 4
//
///////////////////////////////////////////////////////////////////////////////////