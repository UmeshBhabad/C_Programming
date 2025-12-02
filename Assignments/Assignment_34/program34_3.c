/* Accept character from user. If it is capital then display all the 
characters from input character till Z.If input character is small 
then display all the characters in reverse order till a. In other 
cases display as it is.
*/
#include <stdio.h>

void Display(char ch)                           // Function defination
{
    char iCh = '\0';

    if((ch >= 'A') && (ch <= 'Z'))              // Business Logic
    {
        for(iCh = ch; iCh <= 'Z'; iCh++)
        {
            printf("%c\t", iCh);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCh = ch; iCh >= 'a'; iCh--)
        {
            printf("%c\t", iCh);
        }
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