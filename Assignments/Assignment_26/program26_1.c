// Accept number from user and display below pattern.

/*
    Input : 5
    
    Output :    A   B   C   D   E
*/

#include <stdio.h>

void Pattern(int iNo)                           // Function defination
{
    char cCnt = '0';                            // Local Variable

    for(cCnt = 'A'; cCnt < 'A'+iNo; cCnt++)     // Business Logic
    {
        printf("%c\t", cCnt);
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