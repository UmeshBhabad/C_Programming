// Accept string from user and replace all small character to '_'

#include <stdio.h>

void Change(char str[])                             // Function defination
{
    while(*str != '\0')                             // Business Logic
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = '_';
        }
        str++;
    }
}

int main()                                          // Main method
{
    char Arr[50] = {'\0'};                          // Array declaration, Initialization

    printf("Enter string : \n");                    // Accept String
    scanf("%[^'\n']s", Arr);

    Change(Arr);                                    // Function call

    printf("Updated string is : %s\n", Arr);        // Display Output

    return 0;
}