// Program

// Reduced Version: to check whether a number is even or odd using a boolean function

#include <stdio.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNo)                                  // Function to check even or odd
{
    return ((iNo % 2) == 0);                                // Return true if even, false if odd(Business Logic)
}

int main()
{    
    int iValue = 0;                                         // Variable to store user input
    bool bRet = false;                                      // Variable to store function return value

    printf("Enter Number: ");                               // Prompt user for input
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);                            // Function call
    
    printf("Result is : %d\n",bRet);                        // Print the boolean result (1 for true, 0 for false)

    if(bRet==true)                                          // Check the boolean result
    {
        printf("%d is Even number\n",iValue);
    }else{
        printf("%d is Odd number\n",iValue);

    }



    return 0;
}