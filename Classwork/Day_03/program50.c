// Program

// Factors of 6

#include <stdio.h>

void  DisplaynonFactors(int iNo)                                        // Function to display non-factors
{
    int iCnt = 0;
    
    if(iNo < 0)                                                         // Updator for negative input                        
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)                              // Loop to check for non-factors
    {
        if(iNo % iCnt != 0)                                             // Condition to identify non-factors
        {
            printf("%d\n",iCnt);
        }
    }    
}

// Time Complexity: O(N/2)

int main()
{
    int iValue = 0;
    
    printf("Enter the Number: ");                                       // Input from user
    scanf("%d",&iValue);

    DisplaynonFactors(iValue);                                          // Function Call 


    return 0;
}