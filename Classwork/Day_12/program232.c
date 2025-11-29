// Accept string from user and return count of digits characters in it

#include <stdio.h>

void CountDigits(char str[])                        // Function defination
{
    int iCount = 0;                                 // Local Variable

    while(*str != '\0')                             // Business Logic
    {
        if ((*str >= 48) && (*str <= 57))   // '0' - '9'
        {
            iCount++;
        }
        str++;
    }

    printf("Number of Digits : %d\n", iCount);      // Display Output
}

int main()
{
    char Arr[50] = {'\0'};                          // Array declaration, Initialization

    printf("Enter string : \n");                    // Accept String
    scanf("%[^'\n']s", Arr);

    CountDigits(Arr);                               // Function call

    return 0;
}