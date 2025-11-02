// Accept one number and check whether it is divisible by 5 or not.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckDivisible
// Description:   Used to check whether the number is divisible by 5 or not
// Input:         Integer
// Output:        String
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckDivisible(int iNo)                                // Function Definition
{
    if((iNo % 5) == 0)                                      // Logic
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
    int iValue = 0;                                         // Local Variable
    bool bRet = false;

    printf("Enter the number :\n");                         // Accepting Input
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue);                          // Function Call

    if(bRet == true)                                        // Display Output
    {
        printf("%d is divisible by 5\n", iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n", iValue);
    }

    return 0;
}