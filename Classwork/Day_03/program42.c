// Program 

// Reduced Approach(Use even numbers approach)

#include <stdio.h>
void display(int iNum)                                                  // Function defination                                  
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNum; iCount++)                           // for loop
    {
        
        if(iCount % 2 == 0)                                             // Business Logic
        {
            printf("%d\t",iCount);
        }
        
    }
}

// Time Complexity: O(N)

int main()
{
    int iValue = 0;
    
    printf("Please Enter the frequency: ");                             // Accept input from user
    scanf("%d",&iValue);
    
    display(iValue);                                                    // Function Call
    
    return 0;
}