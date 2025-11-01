// Program

// Updating Flag before loop to assume number is prime

#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)                                // Function defination
{
    int iCnt = 0;                                       // Loop Variable
    bool bFlag = false;                                 // Flag Variable set to false

    if(iNo < 0)                                         // Update input if negative
    {
        iNo = -iNo;
    }

    // Input : 6   iCnt = 2
    bFlag = true;                                       // Assume prime until proven otherwise  

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)                
    {      
        if(iNo % iCnt == 0)                             // Business Logic
        {
            bFlag = false;
            break;                                      // Optimizaton
        }

    }
    return bFlag;

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