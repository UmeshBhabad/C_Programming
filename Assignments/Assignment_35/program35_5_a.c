// Write a program which accept  string from user and count number of small characters.

#include <stdio.h>

void Reverse(char *str)                                 // Function defination
{
    char *temp = str;                                   // local Variables
    char Brr[50] = {'\0'};
    int iCnt = 0;

    // Business Logic
    while(*str != '\0')
    {
        str++;
    }
    str--;

    while(str >= temp)
    {
        Brr[iCnt] = *str;
        iCnt++;
        str--;
    }
    printf("%s\n", Brr);
}

int main()                                              // Main method
{
    char Arr[50] = {'\0'};                              // Local Variables

    printf("Enter the String :\n");                     // Accept string
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);                                       // Function call

    return 0;
}