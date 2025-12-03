// Write a program which accept string from user and reverse that string in place.

/*
    Input   :   "abcd"

    Output  :   "dcba"

    Input   :   "abba"

    Output  :   "abba"
*/

#include <stdio.h>

void StrRevX(char str[])                        // Function defination
{
    char *Start = str;                          // Local pointer Variables
    char *End = str;
    char temp = '\0';

    while(*End != '\0')                         // Business Logic
    {
        End++;
    }
    End--;

    while(End > Start)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }
}

int main()                                      // Main Method
{
    char Arr[50] = {'\0'};                      // Local Variables

    printf("Enter the String : \n");            // Accept String
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr);                               // Function call

    printf("Updated String : %s\n", Arr);       // Display Output

    return 0;
}