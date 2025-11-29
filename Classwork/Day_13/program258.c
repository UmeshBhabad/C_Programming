// Accept String from user and copy the string in another empty string.

#include <stdio.h>

void strcatX(char *Src, char *Dest)                                 // FUnction defination
{
    while(*Dest != '\0')                                            // Business Logic
    {
        Dest++;
    }

    while(*Src != '\0')
    {
        *Dest = *Src;
        Src++;
        Dest++;
    }
    
    *Dest = *Src;   // *Dest = '\0'
}

int main()                                                          // Main Method
{
    char Arr[50] = {'\0'};                                          // array declaration, Initialization
    char Brr[50] = {'\0'};

    printf("Enter Source String :\n");                              // Accept Source String
    scanf("%[^'\n']s", Arr);

    printf("Enter Destination String :\n");                         // Accept Destination String
    scanf(" %[^'\n']s", Brr);   // Add white space

    strcatX(Arr, Brr);                                              // Function call

    printf("Updated string is : %s\n", Brr);                        // Display Output

    return 0;
}