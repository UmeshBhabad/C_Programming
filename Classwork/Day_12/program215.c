#include <stdio.h>

void Display(char * str)                // Function defination
{   
    // Business Logic 
    while(*str != '\0')                 // Use while loop for string operation in C/C++
    {
        printf("%c\n", *str);
        str++;
    }
}

int main()                              // main method
{
    char Arr[50] = {'\0'};              // character array declaration, Initialization

    printf("Enter string : \n");        // Accept String
    scanf("%[^'\n']s", Arr);            // take input till \n

    Display(Arr);                       // Function call

    return 0;
}

