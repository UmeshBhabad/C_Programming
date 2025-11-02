// Accept one number from user, if number is less than 10 then print "Hello" otherwise print "Demo".

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:   Used to print Hello or Demo based on user input
// Input:         Integer
// Output:        String
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)                                       // Function Definition
{
    if(iNo < 10)                                            // Logic
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;                                         // Local Variable

    printf("Enter number :");                               // Accepting Input
    scanf("%d", &iValue);

    Display(iValue);                                        // Function Call

    return 0;
}