// Write a program which accept number from user and return the count of even digits.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CountEven
// Description:   Used to Count even digits in a Number.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountEven(int iNo)
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
        iNo /= 10;

        if(iDigit % 2 == 0)
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

    iRet = CountEven(iValue);

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
// Output:  2
//
// Input: -1018               
// Output:  2
//
// Input: 8462               
// Output:  4
//
///////////////////////////////////////////////////////////////////////////////////