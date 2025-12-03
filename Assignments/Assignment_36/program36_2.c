// Write a program which accept string from user and convert it into upper case.

/*
    Input   :   "Marvellous Multi OS"

    Output  :   MARVELLOUS MULTI OS
*/

#include <stdio.h>

void struprX(char str[])                        // Function defination
{
    while(*str != '\0')                         // Business Logic
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = (char)(*str - 32);
        }
        str++;
    }
}

int main()                                      // Main Method
{
    char Arr[50] = {'\0'};                      // Local Variable

    printf("Enter the String :\n");             // Accept String
    scanf("%[^'\n']s", Arr);

    struprX(Arr);                               // Function call

    printf("Updated String : %s\n", Arr);       // Display Output

    return 0;
}