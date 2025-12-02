// Accept Character from user and check whether it is digit or not.

#include <stdio.h>

typedef int BOOL;                               // Aliasing int

#define TRUE 1
#define FALSE 0

BOOL ChkDigit(char ch)                          // Function defination
{
    if((ch >= '0') && (ch <= '9'))              // Business Logic
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

    bRet = ChkDigit(cValue);                    // Function call

    if(bRet == TRUE)                            // Display Output
    {
        printf("It is a digit Character.");
    }
    else
    {
        printf("It is not a digit Character.");
    }

    return 0;
}