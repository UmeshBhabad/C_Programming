// Accept number from user and display below pattern.

/*
    Input : 5
    
    Output :    1   *   2   *   3   *   4   *   5   *
                1   2   3   4   5   6   7   8   9   10
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

void Pattern(int iNo)                                   // Function defination
{
    int iCnt = 0;                                       // Local Variables
    int iNum = 0;

    for(iCnt = 1, iNum = 1; iCnt <= 2*iNo; iCnt++)      // Business Logic
    {
        if(iCnt % 2 == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("%d\t", iNum);
            iNum++;
        }
    }
}

int main()
{
    int iValue = 0;                                     // Local Variables

    printf("Enter the Frequency : \n");                 // Input
    scanf("%d", &iValue);

    Pattern(iValue);                                    // Function call

    return 0;
}