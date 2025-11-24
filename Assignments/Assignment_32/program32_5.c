// Accept number of rows and number of columns from user and display below pattern.

/*
    Input :     iRow = 5    iCol = 5

    Output :    1   2   3   4   5
                1   2           5
                1       3       5
                1           4   5
                1   2   3   4   5
*/

///////////////////////////////////////////////////////////////////////////////////////
//
// Header File
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
// 
// Function     : Pattern
// Description  : used to Display patterns
// Input        : Integer, Integer
// Output       : String
// Author       : Umesh Shivaji Bhabad
// Date         : 24/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCols)                       // Function Defination
{
    int i = 0, j = 0;                                   // Local Variables

    for(i = 1; i <= iRow; i++)                          // Business Logic
    {
        for(j = 1; j <= iCols; j++)
        {
            if(i == iRow || i == 1 || j == 1 || j == iCols || j == i)
            {
                printf("%d\t", j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

int main()                                              // Main Method
{
    int iValue1 = 0, iValue2 = 0;                       // Local Variables

    printf("Enter the Number of Rows : \n");            // Accept Rows
    scanf("%d", &iValue1);

    printf("Enter the Number of Columns : \n");         // Accept Columns
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);                          // Function call

    return 0;
}