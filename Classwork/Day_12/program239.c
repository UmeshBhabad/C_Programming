// Accept string from user and toggle the case of the String

#include <stdio.h>

void strtoggleX(char str[])                                 // Function defination
{
    while(*str != '\0')                                     // Business Logic
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str -= 32;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str += 32;
        }
        str++;
    }
}

int main()                                                  // Main method
{
    char Arr[50] = {'\0'};                                  // array declaration, Initialization

    printf("Enter string : \n");                            // Accept String
    scanf("%[^'\n']s", Arr);

    strtoggleX(Arr);                                        // Function call

    printf("Updated string is : %s\n", Arr);                // Display Output

    return 0;
}