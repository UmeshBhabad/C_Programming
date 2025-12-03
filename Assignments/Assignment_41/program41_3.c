// Write a recursive program which accept number from user and count number of characters.

/*
    Input   :   Hello

    Output  :   5
*/
#include <stdio.h>

int Strlen(char * str)                  // Function defination
{
    static int iCount = 0;              // Local Variable

    if(*str != '\0')                    // Business Logic
    {
        iCount++;
        str++;
        Strlen(str);                    // Recursive call
    }

    return iCount;
}

int main()                              // Main method
{
    char Arr[] = {'\0'};                // Local Variable
    int iRet = 0;

    printf("Enter the String :\n");     // Accept Number
    scanf("%[^'\n']s", &Arr);
    
    iRet = Strlen(Arr);                 // Function call

    printf("Count : %d\n", iRet);       // Display Output

    return 0;
}