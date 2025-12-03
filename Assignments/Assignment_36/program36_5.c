// Write a program which accept string from user and count number of white spaces in it.

/*
    Input   :   "Marvellous Multi OS"

    Output  :   2
*/

#include <stdio.h>

int CountWhite(char str[])                          // Function defination
{
    int iCount = 0;                                 // Local Variables

    while(*str != '\0')                             // Business Logic
    {
        if((*str == ' '))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()                                          // Main Method
{
    char Arr[50] = {'\0'};                          // Local Variable
    int iRet = 0;

    printf("Enter the String :\n");                 // Accept String
    scanf("%[^'\n']s", Arr);

    iRet = CountWhite(Arr);                         // Function call

    printf("Count of White Spaces : %d\n", iRet);   // Display Output

    return 0;
}