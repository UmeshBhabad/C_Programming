// Print all count of factors of a Number.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: count_factors
// Description:   Used to count all factors of a Number.
// Input:         Integer
// Output:        Integers
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int count_factors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    iRet = count_factors(iValue);

    printf("%d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 6                 
// Output: 3
//
// Input: 12                  
// Output: 5
//
// Input: -24                  
// Output: 7
//
// Input: 13                  
// Output: 1
//
///////////////////////////////////////////////////////////////////////////////////