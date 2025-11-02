// Write a program which accept number from user and display its factors in decreasing order

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: FactRev
// Description:   Used for display factors in decreasing order
// Input:         Integer
// Output:        Integers
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void FactRev(int iNo)                                       // Function defination
{
    int iCnt = 0;                                           // loop Counter

    if(iNo < 0)                                             // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)                  // Business Logic
    {
        if((iNo % iCnt) == 0)                               
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");                           // User Input
    scanf("%d",&iValue);

    FactRev(iValue);                                        // Function Call

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 12                     
// Output: 6 4 3 2 1
//
// Input: 13                     
// Output: 1
//
// Input: 10                     
// Output: 5 2 1
//
////////////////////////////////////////////////////////////////////////////////// 