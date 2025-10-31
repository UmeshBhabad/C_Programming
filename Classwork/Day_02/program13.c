// Program

// Using boolean return type to check even or odd

#include <stdio.h>
#include <stdbool.h>                            // Header file for boolean data type

bool CheckEvenOdd(bool iNo)                     // Function to check even or odd
{
    int iRem = 0;                               // Variable to store remainder 

    iRem = iNo%2;                               // Modulus operator to get remainder
    
    if (iRem == 0)                              // Condition to check even or odd(Business Logic)
    {
        return true;
    }else{
        return false;
    }
}

int main()
{    
    int iValue = 0;
    bool bRet = false;                          // Variable to store boolean result

    printf("Enter Number: ");                   // Accept number from user
    scanf("%d",&iValue);                        // Store the value in iValue

    bRet = CheckEvenOdd(iValue);                // Function Call
    
    printf("Result is : %d\n",bRet);            // Display the boolean result



    return 0;
}