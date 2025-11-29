// Accept string from user and count of occurance of 'd' in it

#include <stdio.h>

int CountOccurance(char str[], char ch)                             // Function defination
{
    int iCount = 0;                                                 // Local Variable

    while(*str != '\0')                                             // Business Logic
    {
        if (*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()                                                          // Main Method
{
    char Arr[50] = {'\0'};                                          // Local Variable
    int iRet = 0;

    printf("Enter string : \n");                                    // Accept String
    scanf("%[^'\n']s", Arr);

    iRet = CountOccurance(Arr, 'd');                                // Function call

    printf("Number of occurance of d are : %d\n", iRet);            // Display Output

    return 0;
}