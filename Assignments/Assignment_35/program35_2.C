// Write a program which accept string from user and count number of small characters.

#include <stdio.h>

int CountSmall(char *str)                               // Function defination
{
    int iCount = 0;                                     // Local Variables
    
    while(*str != '\0')                                 // Business Logic
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()                                              // Main method
{
    char Arr[50] = {'\0'};                              // Local Variables
    int iRet = 0;

    printf("Enter the String :\n");                     // Accept string
    scanf("%[^'\n']s", Arr);

    iRet = CountSmall(Arr);                             // Function call

    printf("Count of small character is %d\n", iRet);   // Display Output

    return 0;
}