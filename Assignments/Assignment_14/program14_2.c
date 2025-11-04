// Write a program which accept number from user and check whether it contains 0 in it or not.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: ChkZero
// Description:   Used print check whether number contain 0.
// Input:         Integer
// Output:        bool
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo /= 10;
        if(iDigit == 0)
        {
            return TRUE;
            break;
        }
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;

}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 2395                
// Output:  There is no Zero
//
// Input: -1018                
// Output:  It Contains Zero
//
// Input: 9000                
// Output:  It Contains Zero
//
///////////////////////////////////////////////////////////////////////////////////