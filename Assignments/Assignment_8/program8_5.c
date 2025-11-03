// Write a program which accept a number from user and display its table in reverse order.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Table
// Description:   Used to print Table of a Number.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                   
// Output: 50   45  40  35  30  25  20  15  10  5
//
// Input: -2                   
// Output: 20   18  16  14  12  10  8   6   4   2
//
///////////////////////////////////////////////////////////////////////////////////