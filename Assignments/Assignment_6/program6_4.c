// Write a program which accept three numbers from user and print its multiplication

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Multiply
// Description:   Used to Multiply three numbers.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 == 0)
    {
        iNo1 = 1;
    }

    if(iNo2 == 0)
    {
        iNo2 = 1;
    }

    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
        // iNo1 = 0; iNo2 = 0; iNo3 = 0;
    }

    return iNo1 * iNo2 * iNo3;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5 4 7                    
// Output: 140
//
// Input: 5 0 7                     
// Output: 35
//
// Input: 0 0 0                     
// Output: 0
//
////////////////////////////////////////////////////////////////////////////////// 