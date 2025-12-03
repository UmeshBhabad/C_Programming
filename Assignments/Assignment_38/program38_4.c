// Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case.

/*
    Input   :   "Marvellous Python 2"

    Output  :   "marvellous python 2"
*/

#include <stdio.h>

void StrCpySmall(char *Src, char *Dest)          // Function defination
{
    while(*Src != '\0')                         // Business Logic
    {
        if((*Src >= 'A') && (*Src <= 'Z'))
        {
            *Src = (char)(*Src + 32);
        }
        *Dest = *Src;
        Dest++;
        Src++;
    }
}

int main()                                      // Main Method
{
    char Arr[50] = {'\0'};                      // Local Variables
    char Brr[50] = {'\0'};

    printf("Enter the String : \n");            // Accept String
    scanf("%[^'\n']s", Arr);

    StrCpySmall(Arr, Brr); // Function call

    printf("Updated String : %s\n", Brr);       // Display Output

    return 0;
}