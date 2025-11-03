// Write a program which accept N Numbers & print first 5 multiples of N.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: MultipleDisplay
// Description:   Used to print 5 multiples of N.
// Input:         Integer
// Output:        Integers
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <=5; iCnt++)
    {
        printf("%d\t",iCnt * iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 4                   
// Output: 4    8   12  16  20
//
///////////////////////////////////////////////////////////////////////////////////