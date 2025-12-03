// Write a program which accept string from user and accept one character. Return the index of last occurance of that character.

/*
    Input   :   "Marvellous Multi OS"
                M

    Output  :   11

    Input   :   "Marvellous Multi OS"
                W

    Output  :   -1
*/

#include <stdio.h>

int LastChar(char str[], char ch)               // Function defination
{
    int iIndex = 0;                             // Local Variable
    int iRes = 0, iCount = 0;

    iIndex = 0;
    while(*str != '\0')                         // Business Logic
    {
        if(*str == ch)
        {
            iRes = iIndex;
            iCount++;
        }
        iIndex++;
        str++;
    }

    // printf("%d\n", iIndex);

    if(iCount > 0)
    {
        return iRes;
    }
    else
    {
        return -1;
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

    iRet = LastChar(Arr, cValue);               // Function call

    printf("Index : %d\n", iRet);               // Display Output

    return 0;
}