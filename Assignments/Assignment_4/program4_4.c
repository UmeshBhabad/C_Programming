// write a program which accept number from user and display summation of all its non factors.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: SumNonFact
// Description:   Used for display Summation of Non-factors
// Input:         Integer
// Output:        Integers
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int SumNonFact(int iNo)                                     // Function defination
{
    int iCnt = 0;                                           // loop counter
    int iSum = 0;

    if(iNo < 0)                                             // Updater
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)                      // Iteration
    {
        if((iNo % iCnt) != 0)                               // Business Logic
        {
            iSum += iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;                                         // Local Variable
    int iRet = 0;

    printf("Enter the Number\n");                           // Input
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);                              // Function Call

    printf("Summation of non-factors is %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 12                     
// Output: 50
//
// Input: 10                     
// Output: 37
//
////////////////////////////////////////////////////////////////////////////////// 