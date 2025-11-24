// Accept number from user and display below pattern.

/*
    Input : 4
    
    Output :    #   1   *   #   2   *   #   3   *   #   4   *
*/

///////////////////////////////////////////////////////////////////////////////////////
//
// Header File
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
// 
// Function     : Pattern
// Description  : used to Display patterns
// Input        : Integer
// Output       : String
// Author       : Umesh Shivaji Bhabad
// Date         : 24/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)                               // Function defination
{
    int iCnt = 0;                                   // Local Variable

    for(iCnt = 1; iCnt <= iNo; iCnt++)              // Business Logic
    {
        printf("#\t");
        printf("%d\t", iCnt);
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;                                 // Local Variable

    printf("Enter the Frequency : \n");             // Accept frequecy from user
    scanf("%d", &iValue);

    Pattern(iValue);                                // Function call

    return 0;
}