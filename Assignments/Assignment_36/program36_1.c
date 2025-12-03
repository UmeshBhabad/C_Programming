// Write a program which accept string from user and convert it into lower case.

/*
    Input   :   "Marvellous Multi OS"

    Output  :   marvellous multi os
*/

#include <stdio.h>

void strlwrX(char str[])                        // Function defination
{
    while(*str != '\0')                         // Business Logic
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = (char)(*str + 32);
        }
        str++;
    }
}

int main()                                      // Main Method
{
    char Arr[50] = {'\0'};                      // Local Variable

    printf("Enter the String :\n");             // Accept String
    scanf("%[^'\n']s", Arr);

    strlwrX(Arr);                               // Function call

    printf("Updated String : %s\n", Arr);       // Display Output

    return 0;
}