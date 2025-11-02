// Write a program which accept one number from user and print that number of even numbers on screen

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: PrintEven
// Description:   Used to print even numbers on screen
// Input:         Integer
// Output:        String
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo)                                     // Function defination
{
    int iCnt = 0;                                           // loop counter

    if(iNo < 0)                                             // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= 2 * iNo; iCnt += 2)               // Business Logic
    {
        printf("%d\t", iCnt);
     
    }
}

int main()
{
    int iValue = 0;                                         // Local Variables

    printf("Enter Number :\n");                             // User Input
    scanf("%d", &iValue);

    PrintEven(iValue);                                      // Function call

    return 0;
}