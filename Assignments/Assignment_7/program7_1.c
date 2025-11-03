// Write a program which accept one Number & print that number of $ & * on screen.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Pattern
// Description:   Used to print Pattern.
// Input:         Integer
// Output:        String
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;

}


///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                   
// Output: $     *     $     *     $      *      $     *     $      *
//
// Input: 3                     
// Output: $     *     $     *     $      *
//
// Input: -3                     
// Output: $     *     $     *     $      *
//
////////////////////////////////////////////////////////////////////////////////// 