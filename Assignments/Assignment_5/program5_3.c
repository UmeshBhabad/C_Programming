// Check Leap Year

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckLeapYear
// Description:   Used to check whether the given year is Leap Year.
// Input:         Integer
// Output:        bool
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckLeapYear(int iYr)                                     // Function defination
{
    bool iRes = false;                                          // Local Variable

    if(iYr % 4 == 0 && iYr % 100 != 0 || iYr % 400 == 0)        // Logic
    {
        iRes = true;        
    }
    else
    {
        iRes = false;
    }
    
    return iRes;

}

int main()
{
    int iYear = 0;                                              // Local Variable
    bool bRet = false;

    printf("Enter the Year\n");                                 // Accept input from user
    scanf("%d", &iYear);

    bRet = CheckLeapYear(iYear);                                // Function Call 

    if(bRet == true)                                            // Display Output
    {
        printf("%d is Leap Year", iYear);
    }
    else
    {
        printf("%d is not Leap Year", iYear);
    }

    return 0;

}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 1952                     
// Output: TRUE
//
// Input: 1900                     
// Output: FALSE
//
// Input: 2016                     
// Output: TRUE
//
////////////////////////////////////////////////////////////////////////////////// 