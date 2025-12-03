// Write a recursive program which display below pattern.

// Output   :   a   b   c   d   e   f

#include <stdio.h>

void Display()                  // Function defination
{
    static char ch = 'a';       // Local Variable

    if(ch <= 'f')               // Business Logic
    {
        printf("%c\t", ch);
        ch++;
        Display();              // Recursive call
    }
}

int main()                      // Main Method
{
    Display();                  // Function call

    return 0;
}