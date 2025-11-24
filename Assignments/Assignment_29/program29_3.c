// Accept number of rows and number of columns from user and display below pattern.

/*
    Input :     iRow = 5    iCol = 5

    Output :    a   b   c   d   e
                1   2   3   4   5
                a   b   c   d   e
                1   2   3   4   5
                a   b   c   d   e
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
    int iNum = 1;
    char ch = 'a';

    for(i = 1; i <= iRow; i++)                          // Business Logic
    {
        for(iNum = 1, ch = 'a', j = 1; j <= iCols; j++)
        {
            if(i % 2 == 1)
            {
                printf("%c\t", ch);
                ch++;
            }
            else
            {
                printf("%d\t", iNum);
                iNum++;
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