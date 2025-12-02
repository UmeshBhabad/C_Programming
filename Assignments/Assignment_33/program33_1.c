// Accept Character from user and check whether it is alphabet or not(A-z, a-z).

#include <stdio.h>

typedef int BOOL;                               // Aliasing int

#define TRUE 1
#define FALSE 0

BOOL ChkAlpha(char ch)                          // Function defination
{
    if((ch >= 'A') && (ch <= 'Z') ||
     (ch >= 'a') && (ch <= 'z'))                // Business Logic
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

    bRet = ChkAlpha(cValue);                    // Function call

    if(bRet == TRUE)                            // Display Output
    {
        printf("It is a Alphabet.");
    }
    else
    {
        printf("It is not a Alphabet.");
    }

    return 0;
}