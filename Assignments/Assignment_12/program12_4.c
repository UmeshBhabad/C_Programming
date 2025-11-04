// Sum of even factors of a Number.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: sum_of_factors
// Description:   Used to Print sum of even factors of a Number.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int sum_of_even_factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            if(iCnt % 2 == 0)
            {
                iSum += iCnt;
            }
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    printf("%d",sum_of_even_factors(iValue));

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 6                 
// Output: 2
//
// Input: 12                  
// Output: 12
//
// Input: -24                  
// Output: 32
//
// Input: 13                  
// Output: 0
//
///////////////////////////////////////////////////////////////////////////////////