// Write a program which accept number from user and count frequency of 2 in it.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CountTwo
// Description:   Used to Count of 2 in the number.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountTwo(int iNo)
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
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d\n", iRet);

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
// Input: 9000                
// Output:  0
//
// Input: 922432                
// Output:  3
//
///////////////////////////////////////////////////////////////////////////////////