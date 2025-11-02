// Program to print 5 times "Marvellous" on screen

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:   Used to display "Marvellous" 5 times
// Input:         None
// Output:        String
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()                                              // Function Definition    
{
    int iCnt = 0;                                           // Loop Counter

    for(iCnt = 1; iCnt <= 5; iCnt++)                        // Logic   
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();                                              // Function Call    

    return 0;
}