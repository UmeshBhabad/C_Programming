#include <stdio.h>
#include <stdbool.h>

// Reduced code to check even or odd using boolean return type

bool CheckEvenOdd(int iNo)                          // Function to check even or odd
{

    if (iNo % 2 == 0)                               // Condition to check even or odd(Business Logic)
    {
        return true;
    }else{
        return false;
    }
}

int main()
{    
    int iValue = 0;                                // Variable to accept number from user
    bool bRet = false;                             // Variable to store boolean result

    printf("Enter Number: ");                      // Accept number from user
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);                   // Function Call
    
    printf("Result is : %d\n",bRet);               // Display boolean result

    if(bRet == true)                               // Display even or odd based on boolean result 
    {
        printf("%d is Even number\n",iValue);
    }else{
        printf("%d is Odd number\n",iValue);

    }



    return 0;
}