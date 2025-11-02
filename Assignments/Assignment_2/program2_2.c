// Accept one number from user and print that number of "*" on the screen(optimized).

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:   Used to print "*" on screen based on user input
// Input:         Integer
// Output:        String
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)                                       // Function Definition
{
    if(iNo < 0)                                             // Updator
    {
        iNo = -iNo;
    }

    while(iNo > 0)                                          // Logic    
    {
        printf("*\n");
        iNo--;                                           
    }
}

int main()
{
    int iValue = 0;                                         // Local Variable

    printf("Enter number :\n");                             // Accepting Input
    scanf("%d", &iValue);

    Display(iValue);                                        // Function Call

    return 0;
}