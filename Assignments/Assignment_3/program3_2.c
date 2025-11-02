// Write a program which accept number from user and print even factors of that number

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DisplayEvenFactors
// Description:   Used to print even factors of a number.
// Input:         Integer
// Output:        String of Integers
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayEvenFactors(int iNo)                                            // Function defination
{
    int iCnt = 0;                                                           // loop Counter

    if(iNo < 0)                                                             // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo/2; iCnt += 2)                                 // Iteration
    {
        if((iNo % iCnt) == 0)                                               // Logic
        {
            printf("%d\t",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;                                                         // Local variables

    printf("Enter Number :\n");                                             // Accepting Input
    scanf("%d", &iValue);

    DisplayEvenFactors(iValue);                                             // Display Output

    return 0;
}

////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 24
// Output: 2    4   6   8   12
//
//////////////////////////////////////////////////////////////////////// 

