// write a program which accept number from user and display all its non factors.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: NonFact
// Description:   Used for display Non-factors
// Input:         Integer
// Output:        Integers
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void NonFact(int iNo)                                   // Function defination
{
    int iCnt = 0;                                       // loop counter

    if(iNo < 0)                                         // Updater
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)                  // Iteration
    {
        if((iNo % iCnt) != 0)                           // Business Logic
        {
            printf("%d",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;                                     // Local Variable

    printf("Enter the Number\n");                       // Input
    scanf("%d", &iValue);

    NonFact(iValue);                                    // Function Call

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 12                     
// Output: 5    7   8   9   10  11
//
// Input: 13                     
// Output: 2    3   4   5   6   7   8   9   10  11  12
//
// Input: 10                     
// Output: 3    4   6   7   8   9
//
////////////////////////////////////////////////////////////////////////////////// 