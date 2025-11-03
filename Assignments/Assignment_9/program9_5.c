// Write a program which returns difference between Even factorial and Odd factorial of given number.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: FactorialDiff
// Description:   Used to print difference between Even factorial and Odd factorial of given number.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iResEven = 1, iResOdd = 1, iDiff;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iResEven *= iCnt;
        }
        else
        {
            iResOdd *= iCnt;
        }
    }

    iDiff = iResEven - iResOdd;

    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between Even Factorial and Odd Factorial of the %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                   
// Output: -7 ( 8 - 15)
//
// Input: -5                   
// Output: -7
//
// Input: 10                   
// Output: 2895
//
///////////////////////////////////////////////////////////////////////////////////