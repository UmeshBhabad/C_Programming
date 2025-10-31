// best approach

// Application to demonstrate the concept of Dynamic Function

#include <stdio.h>

void Display(int iFrequency)                                    // Function Definition                   
{
    // Dynamic function
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)                   // Logic
    {
        printf("Jay Ganesh...\n");
    }    
}


int main()                        
{
    int iCount=0;                                               // Local Variable

    printf("Enter the Count: ");                                // Input
    scanf("%d",&iCount);

    Display(iCount);                                            // Function Call   
    
    return 0;    
}