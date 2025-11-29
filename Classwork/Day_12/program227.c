// Accept string from user and return count of small characters in it

#include <stdio.h>

int CountSmall(char str[])                                      // Function defination
{
    int iCount = 0;                                             // Local Variable

    while(*str != '\0')                                         // Business Logic
    {
        if ((*str >= 97) && (*str <= 122))  // Hard coded values
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

    iRet = CountSmall(Arr);                                     // Function call

    printf("Number of small characters are : %d\n", iRet);      // Display Output

    return 0;
}