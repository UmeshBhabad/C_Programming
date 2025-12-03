// Write a recursive program which display below pattern.

/*
    Input   :   5

    Output  :   *   *   *   *   *
*/
#include <stdio.h>

void Display(int iNo)                   // Function defination
{
    static int iCnt = 0;                // Local Variable

    if(iCnt < iNo)                      // Business Logic
    {
        printf("*\t");
        iCnt++;
        Display(iNo);                   // Reccursive call
    }
}

int main()                              // Main method
{
    int iValue = 0;                     // Local Variable

    printf("Enter the Number :\n");     // Accept Number
    scanf("%d", &iValue);
    
    Display(iValue);                    // Function call

    return 0;
}