// Accept Character from user and check whether it is capital character.

#include <stdio.h>

typedef int BOOL;                               // Aliasing int

#define TRUE 1
#define FALSE 0

BOOL ChkCapital(char ch)                        // Function defination
{
    if((ch >= 'A') && (ch <= 'Z'))              // Business Logic
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()                                      // Main method              
{
    char cValue = '\0';                         // Local Variable
    BOOL bRet = FALSE;

    printf("Enter the Character : \n");         // Accept Character
    scanf("%c", &cValue);

    bRet = ChkCapital(cValue);                  // Function call

    if(bRet == TRUE)                            // Display Output
    {
        printf("It is a Capital Character.");
    }
    else
    {
        printf("It is not a Capital Character.");
    }

    return 0;
}