// Write a program which accept string from user and accept one character. Return the index of first occurance of that character.

/*
    Input   :   "Marvellous Multi OS"
                M

    Output  :   0

    Input   :   "Marvellous Multi OS"
                W

    Output  :   -1
*/

#include <stdio.h>

int FirstChar(char str[], char ch)              // Function defination
{
    int iIndex = 0;                             // Local Variable
    int iSize = 0;

    while(str[iIndex] != '\0')                  // array size
    {
        iSize++;
        iIndex++;
    }

    // printf("%d\n", iSize);

    iIndex = 0;
    while(*str != '\0')                         // Business Logic
    {
        if(*str == ch)
        {
            break;
        }
        iIndex++;
        str++;
    }

    // printf("%d\n", iIndex);

    if(iIndex == iSize)
    {
        return -1;
    }
    else
    {
        return iIndex;
    }
}

int main()                                      // Main Method
{
    char Arr[50] = {'\0'};                      // Local Variables
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");            // Accept String
    scanf("%[^'\n']s", Arr);

    printf("Enter the Character :\n");          // Accept Character
    scanf(" %c", &cValue);

    iRet = FirstChar(Arr, cValue);              // Function call

    printf("Index : %d\n", iRet);               // Display Output

    return 0;
}