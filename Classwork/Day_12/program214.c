#include <stdio.h>

void Display(char * str)                    // Function defination
{
    printf("%c\n", *str);                   // print character at given pointer
    str++;                                  // Update pointer
    printf("%c\n", *str);
    str++;
    printf("%c\n", *str);
    str++;
}

int main()                                  // Main method
{
    char Arr[50] = {'\0'};                  // Character array declaration, initialization with \0

    printf("Enter string : \n");            // Accept String
    scanf("%[^'\n']s", Arr);

    Display(Arr);                           // Function call

    return 0;
}

