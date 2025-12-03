// Write a recursive program which accept number from user and display below pattern.

/*
    Input   :   5

    Output  :   5   *   4   *   3   *   2   *   1   *
*/
#include <stdio.h>

void Display(int iNo)                   // Function defination
{
    static int iCnt;                    // Local Variable
    static int isInitialized = 0;

    if(!isInitialized)
    {
        iCnt = iNo;
        isInitialized = 1;
    }
    if(iCnt > 0)                        // Business Logic
    {
        printf("%d\t*\t", iCnt);
        iCnt--;
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