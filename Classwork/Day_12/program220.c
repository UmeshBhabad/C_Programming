// Accept string from user and count occurance of 'a' and 'A' in it

#include <stdio.h>

int Count(char str[])                                               // Main method
{
    int iCount = 0;                                                 // Local Variable

    while(*str != '\0')                                             // Business Logic
    {
        if (*str == 'a' || *str == 'A')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()                                                          // Main method
{
    char Arr[50] = {'\0'};                                          // Local Variables
    int iRet = 0;

    printf("Enter string : \n");                                    // Accpet String
    scanf("%[^'\n']s", Arr);

    iRet = Count(Arr);                                              // Function call

    printf(" Count of occurance of 'A'/'a' is : %d\n", iRet);       // Display Output

    return 0;
}