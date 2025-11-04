// Check if number is divisible by 5.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: is_divisible_by_five
// Description:   Used Check if number is divisible by 5.
// Input:         Integer
// Output:        bool
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool is_divisible_by_five(int iNo)
{
    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    printf("%s\n", is_divisible_by_five(iValue) ? "Yes" : "No");

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                
// Output: Yes
//
// Input: 12                  
// Output: NO
//
// Input: -24                  
// Output: No
//
// Input: -100                  
// Output: Yes
//
///////////////////////////////////////////////////////////////////////////////////