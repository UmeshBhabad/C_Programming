/* Accept character from user and check whether it is special symbol or not(!,@,#,$,%,^,&,*).
*/
#include <stdio.h>
#include <stdbool.h>

bool Display(char ch)                           // Function defination
{
    char bFlag = false;

    if((ch >= 'A') && (ch <= 'Z') ||
     (ch >= 'a') && (ch <= 'z') ||
      (ch >= '0') && (ch <= '9'))               // Business Logic
    {
        bFlag = false;
    }
    else
    {
        bFlag = true;
    }

    return bFlag;
}

int main()                                      // Main method              
{
    char cValue = '\0';                         // Logic Variable
    bool bRet = false;

    printf("Enter the character :\n");          // Accept Character
    scanf("%c", &cValue);
    
    bRet = Display(cValue);                     // Function call

    if(bRet)                                    // Display output
    {
        printf("Special character.");
    }
    else
    {
        printf("Not a Special Character");
    }

    return 0;
}