// best approach

// Using filter to handle invalid input

#include <stdio.h>

void Display(int iFrequency)                   
{
    // Dynamic function
    int iCnt=0;                                         // Local Variable

    // Filter
    if(iFrequency<0)
    {
        printf("Invalid Input");
        return;
    }
    
    for(iCnt = 1;iCnt <= iFrequency; iCnt++)            // Logic
    {
        printf("Jay Ganesh...\n");
    }    
}


int main()                        
{
    int iCount = 0;

    printf("Enter the Count: ");                         // Input
    scanf("%d",&iCount);

    Display(iCount);                                     // Function Call
    
    return 0;    
}