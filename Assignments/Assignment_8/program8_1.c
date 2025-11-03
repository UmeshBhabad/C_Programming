/* Write a program which accept number from and if number is less than 50 then print small,
 if its greater than 50 and less than 100 then print medium, if its greater than 100 then print large.
 */

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Number
// Description:   Used to print Numbers status.
// Input:         Integer
// Output:        String
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo <= 100)
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 75                   
// Output: Medium
//
///////////////////////////////////////////////////////////////////////////////////