// Write a program which accept string from user and check whether it contains vowels in it or not.

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CountSmall(char str[])                             // Function defination
{    
    int iRes = FALSE;                                   // Local Variable
    
    while(*str != '\0')                                 // Business Logic
    {
        if((*str == 'a') || (*str == 'e') || 
        (*str == 'i') || (*str == 'o') || 
        (*str == 'u') || (*str == 'A') || 
        (*str == 'E') || (*str == 'I') || 
        (*str == 'O') || (*str == 'U'))
        {
            iRes = TRUE;
            break;
        }
        str++;
    }

    return iRes;
}

int main()                                              // Main method
{
    char Arr[50] = {'\0'};                              // Local Variables
    BOOL bRet = 0;

    printf("Enter the String :\n");                     // Accept string
    scanf("%[^'\n']s", Arr);

    bRet = CountSmall(Arr);                             // Function call

    if(bRet == TRUE)                                    // Display Output
    {
        printf("Vowels exists.\n");
    }
    else
    {
        printf("Vowels do not exist.\n");
    }


    return 0;
}