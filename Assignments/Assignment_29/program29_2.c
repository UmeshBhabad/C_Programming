// Accept number of rows and number of columns from user and display below pattern.

/*
    Input :     iRow = 4    iCol = 5

    Output :    2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9
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
    int iNumEven = 2;
    int iNumodd = 1;

    for(i = 1; i <= iRow; i++)                          // Business Logic
    {
        for(iNumEven = 2, iNumodd = 1, j = 1; j <= iCols; j++)
        {
            if(i % 2 == 1)
            {
                printf("%d\t", iNumEven);
                iNumEven += 2;
            }
            else
            {
                printf("%d\t", iNumodd);
                iNumodd += 2;
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