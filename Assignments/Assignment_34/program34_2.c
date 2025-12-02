/* Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
*/
#include <stdio.h>

void Display(char ch)                           // Function defination
{
    if((ch >= 'A') && (ch <= 'Z'))              // Business Logic
    {
        ch += 32;
        printf("%c\n", ch);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        ch -= 32;
        printf("%c\n", ch);
    }
    else
    {
        printf("%c\n", ch);
    }
}

int main()                                      // Main method              
{
    char cValue = '\0';                         // Logic Variable

    printf("Enter the character :\n");          // Accept Character
    scanf("%c", &cValue);
    
    Display(cValue);                            // Function call

    return 0;
}