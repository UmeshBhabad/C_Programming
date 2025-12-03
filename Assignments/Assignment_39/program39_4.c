// Write a recursive program which display below pattern.

// Output   :   A   B   C   D   E   F

#include <stdio.h>

void Display()                  // Function defination
{
    static char ch = 'A';       // Local Variable

    if(ch <= 'F')               // Business Logic
    {
        printf("%c\t", ch);
        ch++;
        Display();              // Recursive call
    }
}

int main()                      // Main method
{
    Display();                  // Function call

    return 0;
}