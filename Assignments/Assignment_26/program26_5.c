// Accept number from user and display below pattern.

/*
    Input : 8
    
    Output :    2   4   6   8   10  12  14  16
*/

#include <stdio.h>

void Pattern(int iNo)                           // Function call
{
    int iCnt = 0;                               // Local Variable

    for(iCnt = 1; iCnt <= 2*iNo; iCnt++)        // Business Logic
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
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