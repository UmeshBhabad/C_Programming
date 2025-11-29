// Accept string from user and count occurance of 'A' in it

#include <stdio.h>

int Count(char str[])                                       // Function defination
{
    int iCount = 0;                                         // Local Variable

    while(*str != '\0')                                     // Business Logic
    {
        if (*str == 'A')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()                                                  // main method
{
    char Arr[50] = {'\0'};                                  // Local Variables
    int iRet = 0;

    printf("Enter string : \n");                            // Accept String
    scanf("%[^'\n']s", Arr);

    iRet = Count(Arr);                                      // Function call

    printf(" Count of occurance of 'A' is : %d\n", iRet);   // Display output

    return 0;
}