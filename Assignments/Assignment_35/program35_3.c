// Write a program which accept string from user and return the difference between frequency of small characters and frequency of capital characters.

#include <stdio.h>

int CountSmall(char str[])                              // Function defination
{
    int iCountSmall = 0, iCountCapital = 0;             // Local Variables
    
    while(*str != '\0')                                 // Business Logic
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCountCapital++;
        }
        str++;
    }

    return (iCountSmall - iCountCapital);
}

int main()                                              // Main method
{
    char Arr[50] = {'\0'};                              // Local Variables
    int iRet = 0;

    printf("Enter the String :\n");                     // Accept string
    scanf("%[^'\n']s", Arr);

    iRet = CountSmall(Arr);                             // Function call

    printf("Difference is : %d\n", iRet);               // Display Output

    return 0;
}