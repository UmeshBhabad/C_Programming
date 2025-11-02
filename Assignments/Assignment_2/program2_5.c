// Accept number from user and check whether that number is even or odd. 

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:   Used to check whether the number is even or odd
// Input:         Integer
// Output:        String
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int iNo)                                             // Function defination
{
    // if(iNo < 0)
    // {
    //     iNo = -iNo;
    // }

    if((iNo % 2 == 0))                                              // Logic
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
    int iValue = 0;                                                 // Local Variables
    bool bRet = false;

    printf("Enter number:\n");                                      // Accepting input from user
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);                                       // Funtion call 

    if(bRet == true)                                                // Display output
    {
        printf("%d is even number\n", iValue);
    }
    else
    {
        printf("%d is odd number\n", iValue);
    }

    return 0;
}