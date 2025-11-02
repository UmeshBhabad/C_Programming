// Accept one character from user and convert case of that character

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
#include <ctype.h>

void DisplayConvert(char CValue)                                // Function defination
{
    if ('a' <= CValue <= 'z')                                   // Logic
    {
        printf("%c", toupper(CValue));
    }
    else if ('A' <= CValue <= 'Z')
    {
        printf("%c", tolower(CValue));
    }
    
}

int main()
{
    char cValue = '\0';                                         // Local Variable

    printf("Enter the Character : \n");                         // User input
    scanf("%c", &cValue);

    DisplayConvert(cValue);                                     // Display Output

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: a                     Output: A
//
// Input: D                     Output: d
//
////////////////////////////////////////////////////////////////////////////////// 