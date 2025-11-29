// Accept string from user and count of vowels in it

#include <stdio.h>

int CountVowels(char str[])                                         // Function defination
{
    int iCount = 0;                                                 // Local Variable

    while(*str != '\0')                                             // Business Logic
    {
        if ((*str == 'a') || (*str == 'e') || 
        (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()                                                          // Main Method
{
    char Arr[50] = {'\0'};                                          // Local Variables
    int iRet = 0;

    printf("Enter string : \n");                                    // Accept String
    scanf("%[^'\n']s", Arr);

    iRet = CountVowels(Arr);                                        // Function call

    printf("Count of Vowels is : %d\n", iRet);                      // Display Output

    return 0;
}