// Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DisplayConvert
// Description:   Used to Convert case of the given character
// Input:         char
// Output:        char
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

typedef bool BOOL;                                                                              // used to create an alias

#define TRUE 1                                                                                  // a preprocessor directive used to define macros
#define FALSE 0

bool CheckVowel(char CValue)
{
    if(
        CValue == 'a' || CValue == 'e'|| CValue == 'i'|| CValue == 'o'|| CValue == 'u' ||
        CValue == 'A' || CValue == 'E'|| CValue == 'I'|| CValue == 'O'|| CValue == 'U'
    )                                                                                           // Logic
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';                                                                        // Local Variable
    BOOL bRet = FALSE;

    printf("Enter the Character : \n");                                                        // Input
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);                                                                 // Function call 

    if(bRet == TRUE )                                                                          // Display output
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not a Vowel");
    }
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: a                     Output: TRUE
//
// Input: D                     Output: FALSE
//
////////////////////////////////////////////////////////////////////////////////// 