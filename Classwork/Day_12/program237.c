// Accept string from user and change it to the Lower case

#include <stdio.h>

void strlwrX(char str[])                            // Function defination
{
    while(*str != '\0')                             // Business Logic
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str += 32;
        }
        str++;
    }
}

int main()                                          // Main Method
{
    char Arr[50] = {'\0'};                          // Array declaration, Initialization

    printf("Enter string : \n");                    // Accept String
    scanf("%[^'\n']s", Arr);

    strlwrX(Arr);                                   // Function call

    printf("Updated string is : %s\n", Arr);        // Display Output

    return 0;
}