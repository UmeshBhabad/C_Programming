// Write a program which accept two numbers from user and check whether the numbers are equal or not

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckEqual
// Description:   Used to check for equality
// Input:         Integer
// Output:        bool
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckEqual(int iNo1, int iNo2)                             // Funtion defination
{
    if (iNo1 == iNo2)                                           // Logic
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
    int iValue1 = 0, iValue2 = 0;                               // Local Variables
    bool bRet = false;

    printf("Enter the Number\n");                               // Input
    scanf("%d %d", &iValue1,&iValue2);

    bRet = CheckEqual(iValue1, iValue2);                        // Function Call

    if(bRet == true)                                            // Display output
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}


///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 10 10                    
// Output: Equal
//
// Input: 10 12                     
// Output: Not Equal
//
// Input: 10 -10                     
// Output: Not Equal
//
////////////////////////////////////////////////////////////////////////////////// 