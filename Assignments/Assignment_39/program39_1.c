// Write a recursive program which display below pattern.

// Output   :   *   *   *   *   *

#include <stdio.h>

void Display()              // Function defination
{
    static int iCnt = 0;    // Local Variable

    if(iCnt < 5)            // Business Logic
    {
        printf("*\t");
        iCnt++;
        Display();          // Reccursive call
    }
}

int main()                  // Main method
{
    Display();              // Function call

    return 0;
}