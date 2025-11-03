// Write a program which accept a number from user and display below pattern.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:   Used to print Pattern.
// Input:         Integer
// Output:        String
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 2*iNo; iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("*\t",iCnt);
        }
        if(iCnt > iNo)
        {
            printf("#\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    Display(iValue);
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                   
// Output: *    *   *   *   *   #   #   #   #   #
//
// Input: -6                   
// Output: *    *   *   *   *   *   #   #   #   #   #   #
//
///////////////////////////////////////////////////////////////////////////////////