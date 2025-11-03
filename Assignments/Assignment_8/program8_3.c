// Accept a number from user and find factorial of the given number.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Factorial
// Description:   Used to print factorial of a Number.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iRes = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        iRes *= iCnt;
    }

    return iRes;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is %d", iValue, iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                   
// Output: 120
//
// Input: -5                   
// Output: 120
//
// Input: 4                   
// Output: 24
//
///////////////////////////////////////////////////////////////////////////////////