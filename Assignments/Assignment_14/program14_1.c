// Write a program which accept number from user and display its digits in reverse order.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DisplayDigits
// Description:   Used print digits of the number in reverse order.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        printf("%d\n", iDigit);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 2395                
// Output:  5
//          9
//          3
//          2
//
// Input: -1018                
// Output:  8
//          1
//          0
//          1
//
// Input: 9000                
// Output:  0
//          0
//          0
//          9
//
///////////////////////////////////////////////////////////////////////////////////