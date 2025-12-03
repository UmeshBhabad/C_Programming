// Write a program which accept string from user and accept one character. Check whether that  character is present in the string or not.

/*
    Input   :   "Marvellous Multi OS"
                e

    Output  :   TRUE
*/

#include <stdio.h>
#include <stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkChar(char str[], char ch)               // Function defination
{
    BOOL bRes = FALSE;                          // Local Variable

    while(*str != '\0')                         // Business Logic
    {
        if(*str == ch)
        {
            bRes = TRUE;
            break;
        }
        str++;
    }

    return bRes;
}

int main()                                      // Main Method
{
    char Arr[50] = {'\0'};                      // Local Variables
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the String : \n");            // Accept String
    scanf("%[^'\n']s", Arr);

    printf("Enter the Character :\n");          // Accept Character
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);                // Function call

    if(bRet == TRUE)                            // Display Output
    {
        printf("Present\n");
    }
    else
    {
        printf("Absent\n");
    }

    return 0;
}