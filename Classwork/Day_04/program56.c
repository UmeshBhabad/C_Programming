// Program

// Optimized Program to check whether the given number is prime or not(better approach)

#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)                                // Function defination
{
    int iCnt = 0;                                       // Loop Variable

    if(iNo < 0)                                         // Input Updation
    {
        iNo = -iNo;
    }

    // Input : 6   iCnt = 2
    
    for(iCnt = 2; iCnt <= iNo/2; iCnt++)                // Loop
    {
        
        if(iNo % iCnt == 0)                             // Business Logic
        {
            break;                                      // Optimizaton
        }

    }

    if(iCnt > iNo /2)                                   // No Factors
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
    int iValue = 0;                                     // Variable Declaration
    bool bRet = false;
    
    printf("Enter the Number: ");                       // Input
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);                          // Function Call

    if(bRet == true)                                    // Display Output
    {
        printf("%d is a Prime Number",iValue);
    }
    else
    {
        printf("%d is not a Prime Number",iValue);
    }

    return 0;
}

/*
Time Complexity : for Prime= O(N/2)

Time Complexity : for Non- Prime= either 1 or 2
*/