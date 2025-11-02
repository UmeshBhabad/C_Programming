// Write a program which accept number from user and print even factors of that number.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DisplayEvenFactors
// Description:   Used to print even factors of a numbers on screen.
// Input:         Integer
// Output:        String of Integers
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayEvenFactors(int iNo)                                    // Function defination
{
    int iCnt = 0;                                                   // loop counter

    if(iNo <= 0)                                                    // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)                            // Iteration
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))                    // Logic
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;                                                 // Local variable

    printf("Enter the Number: \n");                                 // Acceoting input from User
    scanf("%d", &iValue);

    DisplayEvenFactors(iValue);                                     // Display Output

    return 0;
}

////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 36
// Output: 2   4   6   12  18
//
//////////////////////////////////////////////////////////////////////// 