// Write a program which accept number from user and display its multiplication of factors

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: MultFact
// Description:   Used for multiplication of factors
// Input:         Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultFact(int iNo)                                                   // Function defination
{
    int iRes = 1;                                                       // Local Variables
    int iCnt = 0;


    if(iNo < 0)                                                         // Updater
    {
        iNo = -iNo;
    }

    for( iCnt = 1; iCnt <= iNo / 2; iCnt++)                             // Iterations
    {
        if((iNo % iCnt) == 0)                                           // Factors
        {
            iRes *= iCnt;                                               // Business Logic
        }
    }
    return iRes;
}


int main()
{
    int iValue = 0;                                                     // Local Variables
    int iRet = 0;

    printf("Enter the Number : \n");                                    // User Input
    scanf("%d", &iValue);

    iRet = MultFact(iValue);                                            // Function call

    printf("Multiplication of factors is %d\n",iRet);                   // Display output

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 12                     
// Output: 144( 1 * 2 * 3 * 4 * 6)
//
// Input: 13                     
// Output: 1
//
// Input: 10                     
// Output: 10 ( 1 * 2 * 5)
//
////////////////////////////////////////////////////////////////////////////////// 