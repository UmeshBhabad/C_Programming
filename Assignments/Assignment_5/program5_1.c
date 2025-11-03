// Check Even or Odd

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckEvenOdd
// Description:   Used to check whether the given number is Even or Odd.
// Input:         Integer
// Output:        bool
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNo)                                  // Function defination
{
    if((iNo % 2) == 0)                                      // Logic
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
    int iValue = 0;                                         // Local Variables
    bool bRet = false;

    printf("Enter the Number\n");                           // User Input
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);                            // Function Call

    if(bRet == true)                                        // Display Output
    {
        printf("%d is Even", iValue);
    }
    else
    {
        printf("%d is odd", iValue);
    }

    return 0;
}