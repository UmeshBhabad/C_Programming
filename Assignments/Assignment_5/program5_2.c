// Find Maximum of two Numbers

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: FindMax
// Description:   Used to find max of two Numbers.
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FindMax(int iNo1, int iNo2)                                     // Function defination
{
    if(iNo1 > iNo2)                                                 // Logic
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iNum1 = 0, iNum2 = 0, iResult = 0;                          // Local Variables

    printf("Enter the First Number\n");                             // User Input
    scanf("%d", &iNum1);

    printf("Enter the Second Number\n");                            // User Input
    scanf("%d", &iNum2);

    iResult = FindMax(iNum1, iNum2);                                // Function Call

    printf("Maximum is: %d\n", iResult);                            // Display Output

    return 0;
}