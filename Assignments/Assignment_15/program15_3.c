// Write a program which accept number from user and return the count of digits in between 3 and 7.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CountRange
// Description:   Used to count of digits between 3 and 7 in a Number.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iRes = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit > 3 && iDigit < 7 )
        {
            iRes++;
        }
    }

    return iRes;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 2395                
// Output:  1
//
// Input: 1018                
// Output:  0
//
// Input: -1018               
// Output:  0
//
// Input: 4521               
// Output:  2
//
///////////////////////////////////////////////////////////////////////////////////