// Check Positive, Negative or Zero

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckNumberType
// Description:   Used to check Positive, Negative or Zero.
// Input:         Integer
// Output:        String
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void CheckNumberType(int iNo)                        // Funtion defination
{
    if(iNo == 0)                                     // Logic
    {
        printf("Zero", iNo);
    }
    else if( iNo > 0)
    {
        printf("%d is Positive", iNo);
    }
    else
    {
        printf("%d is Negative", iNo);
    }
}

int main()
{
    int iValue = 0;                                 // Local Variables

    printf("Enter the Number\n");                   // User Input
    scanf("%d", &iValue);

    CheckNumberType(iValue);                        // Function Call

    return 0;
}