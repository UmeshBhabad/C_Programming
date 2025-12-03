// Write a program which accept  string from user and count number of small characters.

#include <stdio.h>

void Reverse(char *str)                                 // Function defination
{
    char *Start = str;                                  // local Variable
    char *End = str;
    char temp = '\0';

    // Business Logic
    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }    
}

int main()                                              // Main method
{
    char Arr[50] = {'\0'};                              // Local Variables

    printf("Enter the String :\n");                     // Accept string
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);                                       // Function call

    printf("Updated String : %s\n", Arr);               // Display Output

    return 0;
}