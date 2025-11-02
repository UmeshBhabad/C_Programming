// Accept two numbers from user and display first number in second number of times.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:   Used to display first number in second number of times
// Input:         Integer, Integer
// Output:        Integers printed on screen
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)                               // Function Definition
{
    int iCnt = 0;                                                   // Loop Counter  

    if(iFrequency < 0)                                              // Updator  
    {
        iFrequency = -iFrequency;
    }

    for(iCnt =1; iCnt <= iFrequency; iCnt++)                        // Logic
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;                                                 // Local Variable
    int iCount = 0;

    printf("Enter the number : \n");                                // Input
    scanf("%d",&iValue);

    printf("Enter the frequency : \n");                             // Input    
    scanf("%d",&iCount);

    Display(iValue,iCount);                                         // Function Call

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
//
// Input    :  5   4
// Output   :  5   5   5   5
//
// Input    :  -2   3
// Output   :  -2   -2   -2
//
// Input    :  10   -5
// Output   :  10   10   10   10   10
///////////////////////////////////////////////////////////////////////////////////