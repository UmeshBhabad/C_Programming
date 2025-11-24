// Accept number from user and display below pattern.

/*
    Input : 5
    
    Output :    A   B   C   D   E
*/

#include <stdio.h>

void Pattern(int iNo)                          // Function defination
{
    int iCnt = '0';                            // Local Variable
    char ch = 'A';

    for(iCnt = 1; iCnt <= iNo; ch++, iCnt++)   // Business Logic
    {
        printf("%c\t", ch);
    }
}

int main()
{
    int iValue = 0;                             // Local Variable

    printf("Enter the Frequency : \n");         // Accept Frequency from user
    scanf("%d", &iValue);

    Pattern(iValue);                            // Function call

    return 0;
}