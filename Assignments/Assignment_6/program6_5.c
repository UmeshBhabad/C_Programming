// Write a program which accept total marks & obtained marks from user and calculate percentage.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Percentage
// Description:   Used to calculate percentage.
// Input:         Integer,  Integer
// Output:        Float
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

float Percentage(int iNo1, int iNo2)
{
    if(iNo1 > 0 && iNo2 > 0)
    {
        return ((float)iNo2 / (float)iNo1) * 100;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter the Total Marks\n");
    scanf("%d", &iValue1);

    printf("Enter the Obtained Marks\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage : %f", fRet);
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 1000      745                    
// Output: 74.5%
//
///////////////////////////////////////////////////////////////////////////////////