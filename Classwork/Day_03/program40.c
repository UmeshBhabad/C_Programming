// Program

// Program to demonstrate numbers from 2 and of step size of 2(Time Complexity: O(N/2))

#include <stdio.h>

void display(int iNum)                                                      // Function Defination
{
    int iCount = 0;                                                         // Loop Counter

    for(iCount = 2; iCount <= iNum; iCount=iCount+2)                        // Business Logic
    {
        printf("%d\t",iCount);
    }
}

// Time Complexity: O(N/2)

int main()
{
    int iValue = 0;                                                         // Local Variable
    
    printf("Please Enter the frequency: ");                                 // Accept input from User
    scanf("%d",&iValue);
    
    display(iValue);                                                        // Function Call
    
    return 0;
}