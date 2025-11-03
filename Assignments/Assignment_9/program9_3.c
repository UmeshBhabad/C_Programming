// Write a program to find even factorial of given number.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: EvenFactorial
// Description:   Used to print even factorial of given number.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iRes = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of the %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                   
// Output: 8 ( 4 * 2)
//
// Input: -5                   
// Output: 8
//
// Input: 10                   
// Output: 3840
//
///////////////////////////////////////////////////////////////////////////////////