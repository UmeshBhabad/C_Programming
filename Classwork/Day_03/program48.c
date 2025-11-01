// Program

// Display Non-Factors of a Number

#include <stdio.h>

void  DisplaynonFactors(int iNo)                                        // Function to display non-factors
{
    int iCnt = 0;
    
    if(iNo < 0)                                                         // Updator for negative numbers  
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)                                   // Loop to check for non-factors                  
    {
        if(iNo % iCnt != 0)                                             // Condition to identify non-factors
        {
            printf("%d\n",iCnt);
        }
    }
    
        
    
}

int main()
{
    int iValue = 0;                                                     // Variable to hold user input  
    
    printf("Enter the Number: ");                                       // Prompt user for input
    scanf("%d",&iValue);

    DisplaynonFactors(iValue);                                          // Function call to display non-factors

    return 0;
}