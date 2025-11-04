// Print all Odd numbers from 1 to N.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: print_odd_numbers
// Description:   Used print odd numbers.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void print_odd_numbers(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    print_odd_numbers(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 8                
// Output: 1    3   5   7
//
///////////////////////////////////////////////////////////////////////////////////