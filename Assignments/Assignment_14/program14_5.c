// Write a program which accept number from user and count frequency of such a digits which are less than 6.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Count
// Description:   Used to Count digits less than 6 in a Number.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Count(int iNo)
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

        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d\n", iRet);

    return 0;

}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 2395                
// Output:  3
//
// Input: 1018                
// Output:  3
//
// Input: 9440                
// Output:  3
//
// Input: 922432                
// Output:  1
//
///////////////////////////////////////////////////////////////////////////////////