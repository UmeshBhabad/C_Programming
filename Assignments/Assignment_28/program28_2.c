// Accept number of rows and number of columns from user and display below pattern.

/*
    Input :     iRow = 4    iCol = 4

    Output :    A   B   C   D
                a   b   c   d
                A   B   C   D
                a   b   c   d
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
    char ch1 = 'A';
    char ch2 = 'a';

    for(i = 1; i <= iRow; i++)                          // Business Logic
    {
        for(ch1 = 'A', ch2 = 'a', j = 1; j <= iCols; j++)
        {
            if(i % 2 == 1)
            {
                printf("%c\t", ch1);
                ch1++; 
            }
            else
            {
                printf("%c\t", ch2);
                ch2++; 
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