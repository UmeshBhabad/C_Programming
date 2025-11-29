// Accept string from user and return count of Capital characters in it

#include <stdio.h>

int CountCapital(char str[])                                // Function defination
{
    int iCount = 0;                                         // Local Variables

    while(*str != '\0')                                     // Business Logic
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()                                                  // Main Method
{
    char Arr[50] = {'\0'};                                  // Local VAriables
    int iRet = 0;

    printf("Enter string : \n");                            // Accept String
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);                               // Function call

    printf("Number of capital characters are : %d\n", iRet);// Display Output

    return 0;
}