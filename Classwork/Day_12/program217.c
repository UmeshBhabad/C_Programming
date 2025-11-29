// creating strlenX function to return length of the string(strlen method of string.h library)

#include <stdio.h>

int strlenX(char str[])                             // Function defination
{
    int iCount = 0;                                 // Local Variable

    while(*str != '\0')                             // Business Logic
    {
        iCount++;
        str++;
    }

    return iCount;
}

int main()                                          // Main method
{
    int iRet = 0;                                   // Local Variables
    char Arr[50] = {'\0'};                          // Character array declaration, Insitialization
    
    printf("Enter string : \n");                    // Accept String
    scanf("%[^'\n']s", Arr);

    iRet = strlenX(Arr);                            // Function call

    printf("String Length is : %d\n", iRet);        // Display Output

    return 0;
}

