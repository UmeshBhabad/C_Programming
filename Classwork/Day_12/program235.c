// Accept string from user and replace 'a' with '_' characters in it

#include <stdio.h>

void Change(char str[])                         // Function defination
{
    while(*str != '\0')                         // Business Logic
    {
        if ((*str == 'a'))
        {
            *str = '_';
        }
        str++;
    }
}

int main()                                      // main method
{
    char Arr[50] = {'\0'};                      // array declaration, Initialization

    printf("Enter string : \n");                // Accept String
    scanf("%[^'\n']s", Arr);

    Change(Arr);                                // Function call

    printf("Updated string is : %s\n", Arr);    // Display Output

    return 0;
}