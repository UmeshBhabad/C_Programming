// Write a program which accept  string from user and count number of small characters.

#include <stdio.h>

void Reverse(char *str)                               // Function defination
{
    char *temp = str;                                   // Local Variable

    // Business Logic
    while(*str != '\0')
    {
        str++;
    }
    str--;

    while(str >= temp)
    {
        printf("%c\n", *str);
        str--;
    }
}

int main()                                              // Main method
{
    char Arr[50] = {'\0'};                              // Local Variables

    printf("Enter the String :\n");                     // Accept string
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);                                       // Function call

    return 0;
}