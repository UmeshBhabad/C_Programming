// Program

// Program to demonstrate Function with Argument and without Return Value(using loop and user input in reverse order)

#include <stdio.h>

void display(int iNum)                                      // Function defination  
{
    int iCount = 0;                                         // Loop Counter  

    for(iCount = iNum; iCount >= 1; iCount--)               // Loop to display frequency in reverse order
    {
        printf("%d\t",iCount);                                  
    }
}

int main()
{
    int iValue=0;                                           // Variable to accept frequency      

    printf("Please Enter the frequency: ");                 // Accept frequency from user
    scanf("%d",&iValue);
    
    display(iValue);                                        // Function call to display frequency in reverse order
    
    return 0;
}