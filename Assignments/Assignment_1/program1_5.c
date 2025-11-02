// Accept one number from user and print that number of "*" on screen

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Accept
// Description:   Used to print "*" on screen based on user input
// Input:         Integer, Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)                      // Logic
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;                                         // Local Variable

    printf("Enter the number of * to print :\n");           // Accepting Input
    scanf("%d", &iValue);

    Accept(iValue);                                         // Function Call

    return 0;
}