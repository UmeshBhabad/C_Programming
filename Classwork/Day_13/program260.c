// Accept String from user and reverse the string.

#include <stdio.h>

void strrevX(char *Src)                     // Function defination
{
    char *Start = Src;                      // Local Variables
    char *End = Src;
    char temp = '\0';
    
    while(*End != '\0')                     // Business Logic
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

int main()                                  // Main method
{
    char Arr[50] = {'\0'};                  // Array declaration, Initialization

    printf("Enter the String :\n");         // Accept String
    scanf("%[^'\n']s", Arr);

    strrevX(Arr);                           // Function call

    printf("Updated String : %s\n", Arr);   // Display Output

    return 0;
}