// Program

// Program to demonstrate Function with Argument and without Return Value(using loop and user input in reverse order till 0)

#include <stdio.h>

void display(int iNum)                                                  // Function defination
{
    int iCount = 0;                                                     // Loop Counter
    
    for(iCount = iNum; iCount >= 0; iCount--)                           // Business Logic(for loop)
    {
        printf("%d\t",iCount);
    }
}

int main(){

    int iValue = 0;                                                     // Local Variable
    
    printf("Please Enter the frequency: ");                             // Accept input from User
    scanf("%d",&iValue);
    
    display(iValue);                                                    // Function Call
    
    return 0;
}