// Write a program which accept string from user and copy that characters of that string into string by removing all white spaces.

/*
    Input   :   "Marvel lous Python"

    Output  :   "MarvellousPython"
*/

#include <stdio.h>

void StrCpyX(char *Src, char *Dest)             // Function defination
{
    while(*Src != '\0')                         // Business Logic
    {
        if(*Src == ' ')
        {
            Src++;
            continue;
        }
        *Dest = *Src;
        Dest++;
        Src++;
    }
}

int main()                                      // Main Method
{
    char Arr[50] = {'\0'};                      // Local Variables
    char Brr[50] = {'\0'};

    printf("Enter the String : \n");            // Accept String
    scanf("%[^'\n']s", Arr);

    StrCpyX(Arr, Brr);                          // Function call

    printf("Updated String : %s\n", Brr);       // Display Output

    return 0;
}