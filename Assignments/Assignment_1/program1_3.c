// Program to print 5 to 1 numbers on screen

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Dislay
// Description:   Used to print 5 to 1 numbers
// Input:         None
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()                                              // Function Defination
{
    int iCnt = 0;                                           // Local Variable   

    iCnt = 5;                                               // Loop Counter    

    while(iCnt > 0)                                         // Logic   
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}

int main()
{
    Display();                                              // Function Call

    return 0;
}