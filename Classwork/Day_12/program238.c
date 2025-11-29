// Accept string from user and change it to lower case

#include <stdio.h>

void struprX(char str[])                            // Function defination
{
    while(*str != '\0')                             // Business Logic
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str -= 32;
        }
        str++;
    }
}

int main()                                          // Main method
{
    char Arr[50] = {'\0'};                          // array declaration, Initialization

    printf("Enter string : \n");                    // Accept String
    scanf("%[^'\n']s", Arr);

    struprX(Arr);                                   // Function call

    printf("Updated string is : %s\n", Arr);        // Display output

    return 0;
}