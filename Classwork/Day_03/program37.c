// Program

// Program to demonstrate Function with Argument and without Return Value(using loop and user input)

#include <stdio.h>

void display(int iNum)                                          // Function defination
{
    int iCount = 0;                                             // Loop Counter
    
    for(iCount = 1; iCount <= iNum; iCount++)                   // Loop to display frequency
    {
        printf("%d\t",iCount);
    }
}

int main()                                                      // Entry point function
{
    int iValue = 0;                                             // Variable to accept frequency

    printf("Please Enter the frequency: ");                     // Accept frequency from user
    scanf("%d",&iValue);

    display(iValue);                                            // Function call to display frequency
    
    return 0;
}