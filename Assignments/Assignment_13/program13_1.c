// Print all numbers from 1 to N.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: print_numbers
// Description:   Used print all numbers till N.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void print_numbers(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    print_numbers(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                
// Output: 1    2   3   4   5
//
///////////////////////////////////////////////////////////////////////////////////