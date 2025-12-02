// Accept Character from user and check whether it is small character.

#include <stdio.h>

typedef int BOOL;                               // Aliasing int

#define TRUE 1
#define FALSE 0

BOOL ChkSmall(char ch)                          // Function defination
{
    if((ch >= 'a') && (ch <= 'z'))              // Business Logic
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

    bRet = ChkSmall(cValue);                    // Function call

    if(bRet == TRUE)                            // Display Output
    {
        printf("It is a Small Character.");
    }
    else
    {
        printf("It is not a Small Character.");
    }

    return 0;
}