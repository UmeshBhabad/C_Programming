// Accept String from user and copy the string in another empty string.

#include <stdio.h>

void strcpyX(char *Src, char *Dest)                     // Function defination
{
    while(*Src != '\0')                                 // Business Logic
    {
        *Dest = *Src;
        Src++;
        Dest++;
    }
    
    *Dest = '\0';
}

int main()                                              // Main method
{
    char Arr[50] = {'\0'};                              // Array declaraton, Initialization
    char Brr[50] = {'\0'};

    printf("Enter the String :\n");                     // Accept String
    scanf("%[^'\n']s", Arr);

    strcpyX(Arr, Brr);                                  // Function call

    printf("Copied string is : %s\n", Brr);             // Display Output

    return 0;
}