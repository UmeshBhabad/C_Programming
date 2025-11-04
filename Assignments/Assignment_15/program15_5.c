// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CountDiff
// Description:   Used to return difference between sum of even and odd digits.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iDiff = 0;
    int iSumEven = 0, iSumOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit % 2 ==0)
        {
            iSumEven += iDigit;
        }
        else
        {
            iSumOdd += iDigit;
        } 
    }

    iDiff = iSumEven - iSumOdd;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}