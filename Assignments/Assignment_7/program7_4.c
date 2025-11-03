// Write a program which accept N Numbers & print all odd numbers upto N.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: OddDisplay
// Description:   Used to print odd numbers till N.
// Input:         Integer
// Output:        Integers
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 18                   
// Output: 1    3   5   7   9   11  13  15  17
//
///////////////////////////////////////////////////////////////////////////////////