// Accept string from user and also accept a character as ch, count of occurance of ch in it

#include <stdio.h>

int CountOccurance(char str[], char ch)                         // Function call
{
    int iCount = 0;                                             // Local Variable

    while(*str != '\0')                                         // Business Logic
    {
        if (*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()                                                      // Main Method
{
    char Arr[50] = {'\0'};                                      // Local Variables
    int iRet = 0;
    char cValue = '\0';

    printf("Enter string : \n");                                // Accept String
    scanf("%[^'\n']s", Arr);

    printf("Enter the Character :\n");                          // Accept Character
    scanf("%c", &cValue);   // Issue

    iRet = CountOccurance(Arr, cValue);                         // Function call

    printf("Number of occurance are : %d\n", iRet);             // Display Output

    return 0;
}