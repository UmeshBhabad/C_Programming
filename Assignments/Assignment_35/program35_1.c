// Write a program which accept string from user and count number of capital characters.

#include <stdio.h>

int CountCapital(char str[])                            // Function defination
{
    int iCount = 0;                                     // Local VAriables
    
    while(*str != '\0')                                 // Business Logic
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(Arr);                           // Function call

    printf("Count of capital character is %d\n", iRet); // Display Output

    return 0;
}