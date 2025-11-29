// Accept string from user and count occurance of 'a' in it

#include <stdio.h>

int Count(char str[])                                           // Function defination
{
    int iCount = 0;                                             // Local Variable

    while(*str != '\0')                                         // Business Logic
    {
        if (*str == 'a')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()                                                      // Main method
{
    char Arr[50] = {'\0'};                                      // Local Variables
    int iRet = 0;

    printf("Enter string : \n");                                // Accept String
    scanf("%[^'\n']s", Arr);

    iRet = Count(Arr);                                          // Function call

    printf(" Count of occurance of 'a' is : %d\n", iRet);       // Display Output

    return 0;
}