// Print sum of all numbers from 1 to N.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: sum_natural_numbers
// Description:   Used print sum of all numbers.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int sum_natural_numbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        
        iSum += iCnt;
        
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    iRet = sum_natural_numbers(iValue);

    printf("%d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 8                
// Output: 36
//
///////////////////////////////////////////////////////////////////////////////////