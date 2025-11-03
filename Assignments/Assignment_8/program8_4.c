// Write a program which accept a number from user and display its table.

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

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                   
// Output: 5    10  15  20  25  30  35  40  45  50
//
// Input: -2                   
// Output: 2    4   6   8   10  12  14  16  18  20
//
///////////////////////////////////////////////////////////////////////////////////