// Accept string from user and return count of small can capital characters in it

#include <stdio.h>

void CountAll(char str[])                                           // Function defination
{
    int iCountSmall = 0, iCountCapital = 0;                         // Local Variables

    while(*str != '\0')                                             // Business Logic
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else    // also considers other characters rather than small characters
        {
            iCountSmall++;
        }
        str++;
    }

    printf("Count of small characters : %d\n", iCountSmall);        // Display Output
    printf("Count of capital characters : %d\n", iCountCapital);
}

int main()                                                          // Main method
{
    char Arr[50] = {'\0'};                                          // character array declaration, Initialization

    printf("Enter string : \n");                                    // Accept String
    scanf("%[^'\n']s", Arr);

    CountAll(Arr);                                                  // Function call

    return 0;
}