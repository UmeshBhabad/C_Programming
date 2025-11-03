// Find Largest among Three Numbers

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CheckLeapYear
// Description:   Used to Largest among three numbers.
// Input:         Integer
// Output:        bool
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FindLargest(int iNo1, int iNo2, int iNo3)                       // Function defination
{
    if(iNo1 > iNo2 && iNo1 > iNo3)                                  // Logic
    {
        return iNo1;
    }
    else if (iNo2 > iNo1 && iNo2 > iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iNum1 = 0, iNum2 = 0, iNum3 = 0, iRes = 0;                  // Local Variables 

    printf("Enter first Number\n");                                 // User Input
    scanf("%d", &iNum1);

    printf("Enter first Number\n");                                 // User Input
    scanf("%d", &iNum2);

    printf("Enter first Number\n");                                 // User Input
    scanf("%d", &iNum3);

    iRes = FindLargest(iNum1, iNum2, iNum3);                        // Function Call
    
    printf("Largest number is : %d", iRes);                         // Display Output

    return 0;
}