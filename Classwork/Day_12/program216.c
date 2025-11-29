#include <stdio.h>

void Display(char str[])                    // Function defination(pass by reference)
{
    while(*str != '\0')                     // Business Logic
    {
        printf("%c\n", *str);
        str++;
    }
}

int main()                                  // Main Method
{
    char Arr[50] = {'\0'};                  // Character array declaration, Initialization

    printf("Enter string : \n");            // Accept String
    scanf("%[^'\n']s", Arr);

    Display(Arr);                           // Function call

    return 0;
}

