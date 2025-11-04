// Write a program which accept range from user and display all numbers in between that range in reverse order

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: RangeDisplay
// Description:   Used to display numbers in between that range in reverse order.
// Input:         Integer
// Output:        Integers
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point\n");
    scanf("%d",&iValue1);

    printf("Enter End point\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}


///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 23 35                 
// Output: 23 24 25 26 27 28 29 30 31 32 33 34 35
//
// Input: 10 18                   
// Output: 10 11 12 13 14 15 16 17 18
//
// Input: 10 10                   
// Output: 10
//
// Input: -10 2                   
// Output: -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
//
///////////////////////////////////////////////////////////////////////////////////