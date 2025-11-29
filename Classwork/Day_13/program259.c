// Accept String from user and reverse the string.

#include <stdio.h>

void ReverseDisplay(char *Src)              // Function defination
{
    char *temp = Src;                       // Local pointer variable(pointer to pointer)
    
    while(*Src != '\0')                     // Business Logic
    {
        Src++;
    }

    while(Src >= temp)
    {
        printf("%c\n",*Src);
        Src--;
    }
}

int main()                                  // Main method
{
    char Arr[50] = {'\0'};                  // Array declaration, Initialization

    printf("Enter the String :\n");         // Accept String
    scanf("%[^'\n']s", Arr);

    ReverseDisplay(Arr);                    // Function call

    return 0;
}