// Write a program which accept number from user and return multiplication of all digits.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: MultDigits
// Description:   Used to return multiplication of all digits.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iRes = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 0)
        {
            iDigit = 1;
        }

        iRes *= iDigit;
    }

    return iRes;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 2395                
// Output:  270
//
// Input: 1018                
// Output:  8
//
// Input: 9440              
// Output:  144
//
// Input: 922432               
// Output:  864
//
///////////////////////////////////////////////////////////////////////////////////