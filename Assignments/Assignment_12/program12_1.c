// Print all factors of a Number.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: print_factors
// Description:   Used to Print all factors of a Number.
// Input:         Integer
// Output:        Integers
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void print_factors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    print_factors(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 6                 
// Output: 1    2   3
//
// Input: 12                  
// Output: 1    2   3   4   6
//
// Input: -24                  
// Output: 1    2   3   4   6   8   12
//
// Input: 13                  
// Output: 1
//
///////////////////////////////////////////////////////////////////////////////////