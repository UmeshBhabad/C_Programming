// Write a recursive program which display below pattern.

// Output   :   1   2   3   4   5

#include <stdio.h>

void Display()                      // Function defination
{
    static int iCnt = 1;            // Local Variable

    if(iCnt <= 5)                   // Business Logic
    {
        printf("%d\t", iCnt);
        iCnt++;
        Display();                  // recursive call
    }
}

int main()                          // Main Method
{
    Display();                      // Function call

    return 0;
}