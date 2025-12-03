// Write a program which accept string from user and display only digits from that string.

/*
    Input   :   "marve89llous121"

    Output  :   89121
*/

#include <stdio.h>

void DisplayDigits(char str[])                  // Function defination
{
    while(*str != '\0')                         // Business Logic
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

int main()                                      // Main Method
{
    char Arr[50] = {'\0'};                      // Local Variable

    printf("Enter the String :\n");             // Accept String
    scanf("%[^'\n']s", Arr);

    DisplayDigits(Arr);                         // Function call

    return 0;
}