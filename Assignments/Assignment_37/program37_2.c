// Write a program which accept string from user and accept one character. Return frequency of that character.

/*
    Input   :   "Marvellous Multi OS"
                M

    Output  :   2
*/

#include <stdio.h>

int CountChar(char str[], char ch)              // Function defination
{
    int iCount = 0;                             // Local Variable

    while(*str != '\0')                         // Business Logic
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()                                      // Main Method
{
    char Arr[50] = {'\0'};                      // Local Variables
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");            // Accept String
    scanf("%[^'\n']s", Arr);

    printf("Enter the Character :\n");          // Accept Character
    scanf(" %c", &cValue);

    iRet = CountChar(Arr, cValue);              // Function call

    printf("Frequency : %d\n", iRet);           // Display Output

    return 0;
}