// Write a program to find Odd factorial of given number.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: OddFactorial
// Description:   Used to print odd factorial of given number.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iRes = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iRes *= iCnt;
        }
    }

    return iRes;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of the %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                   
// Output: 15 ( 1 * 3 * 5)
//
// Input: -5                   
// Output: 15
//
// Input: 10                   
// Output: 945
//
///////////////////////////////////////////////////////////////////////////////////