// Write a program which accept one number from user and check whether that number is greater than 100 or not.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckGreater
// Description:   Used to check whether number is greater than 100.
// Input:         Integer
// Output:        bool
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckGreater(int iNo)                      // Function defination
{
    if(iNo > 100)                               // Logic
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
    int iValue = 0;                             // Local Variables
    bool bRet = false;

    printf("Enter the Number\n");               // input
    scanf("%d", &iValue);

    bRet = CheckGreater(iValue);                // Function call

    if(bRet == true)                            // Output
    {
        printf("%d is Greater", iValue);
    }
    else
    {
        printf("%d is Smaller", iValue);
    }

}


///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 101                    
// Output: Greater
//
// Input: 39                     
// Output: Smaller
//
////////////////////////////////////////////////////////////////////////////////// 