// Write a recursive program which display below pattern.

// Output   :   5   4   3   2   1

#include <stdio.h>

void Display()                      // Function defination
{
    static int iCnt = 5;            // Local Variable

    if(iCnt >= 1)                   // Business Logic
    {
        printf("%d\t", iCnt);
        iCnt--;
        Display();                  // Recursive call
    }
}

int main()                          // Main Method
{
    Display();                      // Function call

    return 0;
}