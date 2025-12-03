// Write a program which accept string from user and reverse that string in place.

/*
    Input   :   "abcd"

    Output  :   "dcba"

    Input   :   "abba"

    Output  :   "abba"
*/

#include <stdio.h>

void StrRevX(char *Src, char *Dest)             // Function defination
{
    char *Start = Dest;                         // Local pointer Variables
    char *End = Src;

    while(*End != '\0')                         // Business Logic
    {
        End++;
    }
    End--;

    while(End >= Src)
    {
        *Start = *End;
        Start++;
        End--;
    }
}

int main()                                      // Main Method
{
    char Arr[50] = {'\0'};                      // Local Variables
    char Brr[50] = {'\0'};

    printf("Enter the String : \n");            // Accept String
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr, Brr);                          // Function call

    printf("Updated String : %s\n", Brr);       // Display Output

    return 0;
}