// Print sum of all even numbers from 1 to N.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: sum_even_numbers
// Description:   Used print sum of all even numbers.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int sum_even_numbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum += iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    iRet = sum_even_numbers(iValue);

    printf("%d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 8                
// Output: 20
//
///////////////////////////////////////////////////////////////////////////////////