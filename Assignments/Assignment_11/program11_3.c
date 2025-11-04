// Write a program which accept range from user and return addition of all numbers in between that range

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: RangeSum
// Description:   Used to print addition of numbers in between the range.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum += iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point\n");
    scanf("%d",&iValue1);

    printf("Enter End point\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iValue1 < 0 || iValue2 < 0 || iValue1 > iValue2)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d", iRet);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 23 30                 
// Output: 212
//
// Input: 10 18                   
// Output: 126
//
// Input: 90 18                   
// Output: Invalid Range
//
// Input: -10 2                   
// Output: Invalid range
//
///////////////////////////////////////////////////////////////////////////////////