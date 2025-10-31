// Program

// Representation: Check even or odd using boolean return type (C11 Standard)

//////////////////////////////////////////////////////////////////////
//
//  Required Header File
//
//////////////////////////////////////////////////////////////////////

#include <stdio.h>                              // For Input Output
#include <stdbool.h>                            // For bool datatype

//////////////////////////////////////////////////////////////////////
//
//  Function name :                 CheckEvenOdd
//  Description :                   It is used to check even or odd
//  Input :                         Integer
//  Output :                        Umesh shivaji Bhabad
//  Auther :                        10/10/2025
//
//////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)                                  // Function to check even or odd
{
    int iRem=0;                                             // Local variable to store remainder 

    iRem=iNo % 2;                                           // Business Logic to check even or odd  
    
    if (iRem==0)                                            // Condition to check even or odd(Business Logic)
    {  return true; }
    else
    {   return false; }
}

//////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
//////////////////////////////////////////////////////////////////////

int main()
{
    
    int iValue = 0;                                         // Variable to accept number from user
    bool bRet = false;                                      // Variable to store boolean result

    printf("Enter Number: ");                               // Accept number from user
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);                            // Function Call 
    
    printf("Result is : %d\n",bRet);                        // Display boolean result

    if(bRet == true)                                        // Display even or odd based on boolean result 
    {
        printf("%d is Even number\n",iValue);
    }else{
        printf("%d is Odd number\n",iValue);

    }



    return 0;
}

//////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////
