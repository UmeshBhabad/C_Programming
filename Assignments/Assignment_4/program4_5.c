// write a program which accept number from user and display difference between summation of all its factors and non factors.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: FactDiff
// Description:   Used for display Difference between Summation of factors and Non-factors
// Input:         Integer
// Output:        Integers
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FactDiff(int iNo)                                       // Function defination
{
    int iCnt = 0;                                           // loop counter
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;

    if(iNo < 0)                                             // Updater
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)                       // Iteration
    {
        if((iNo % iCnt) == 0)                               // Business Logic
        {
            iSumFact += iCnt;
        }
        else
        {
            iSumNonFact += iCnt;
        }

        iDiff = iSumFact - iSumNonFact;
    }

    return iDiff;
}

int main()
{
    int iValue = 0;                                         // Local Variable
    int iRet = 0;

    printf("Enter the Number\n");                           // Input
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);                                // Function Call

    printf("Difference between Summation of all factors and all non-factors is %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 12                     
// Output: -34
//
// Input: 10                     
// Output: -29
//
////////////////////////////////////////////////////////////////////////////////// 