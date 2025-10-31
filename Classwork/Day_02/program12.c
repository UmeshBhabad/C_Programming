/*
START
    Accept number and store as no.
    Divide no by two.
    if the remainder is zero 
        then display even 
    otherwise
        display odd.

STOP
*/

// Program

// Accept number from user and check whether it is even or odd

#include <stdio.h>


void CheckEvenOdd(int iNo)                             // Function to check even or odd
{
    int iRem = 0;                                      // Variable to store remainder

    iRem = iNo%2;                                      // Modulus operator to get remainder
    
    if (iRem == 0)                                     // Condition to check even or odd(Business Logic)
    {
        printf("The number is Even");
    }else{
        printf("Odd Number");
    }
}

int main()
{    
    int iValue = 0;                                    // Variable to accept the number from user

    printf("Enter Number\n");                          // Accept number from user
    scanf("%d",&iValue);                               // Store the value in iValue

    CheckEvenOdd(iValue);                              // Function Call

    return 0;
}