// Program

// Optimized Program to check whether the given number is prime or not(best approach)

#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)                                // Function defination 
{
    int iCnt = 0;                                       // Local Variable
    bool bFlag = true;                                  // Flag Variable
    
    if(iNo < 0)                                         // Input Updation
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt*iCnt <= iNo; iCnt++)             // Loop
    {
        if(iNo % iCnt == 0)                             // Business Logic
        {
            bFlag = false;                              // Update Flag
            break;                                      // Optimization
        }
    }

}

int main()
{
    int iValue = 0;                                     // Variable Declaration 
    bool bRet = false;

    printf("Enter the Number: ");                       // Input
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);                          // Function Call
    
    if(bRet == true)
    {
        printf("%d is a Prime Number",iValue);          // Display Output
    }
    else
    {
        printf("%d is not a Prime Number",iValue);      // Display Output
    }
    
    return 0;
}