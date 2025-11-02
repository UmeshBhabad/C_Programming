// Program to divide two numbers

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Divide
// Description:   Used to divide two numbers
// Input:         Integer, Integer
// Output:        Integer
// Author:        Umesh Shivaji Bhabad
// Date:          02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Divide(int iNo1, int iNo2)                                      // Function Definition
{
    int iAns = 0;                                                   // Local Variable

    if(iNo2 == 0)                                                   // Input Updation
    {
        return -1;
    }

    iAns = iNo1 / iNo2;                                             // Logic    
    
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;                                  // Local Variables   
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);                                // Function Call

    printf("Division is: %d\n", iRet);                              // Output    

    return 0;
}
