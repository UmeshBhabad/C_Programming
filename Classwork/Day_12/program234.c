// Accept string from user and return count of white spaces characters in it

#include <stdio.h>

void CountSpace(char str[])                         // Function defination
{
    int iCount = 0;                                 // Local Variable

    while(*str != '\0')                             // Business Logic
    {
        if ((*str == ' '))
        {
            iCount++;
        }
        str++;
    }

    printf("Number of Space : %d\n", iCount);       // Display Output
}

int main()                                          // main method
{
    char Arr[50] = {'\0'};                          // character array declaration, Initialization

    printf("Enter string : \n");                    // Accept String
    scanf("%[^'\n']s", Arr);

    CountSpace(Arr);                                // Function call

    return 0;
}