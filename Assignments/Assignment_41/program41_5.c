// Write a recursive program which accept number from user and return product of its digits.

/*
    Input   :   523

    Output  :   30
*/
#include <stdio.h>

int Mult(int iNo)                       // Function defination
{
    static int iProduct = 1;            // Local Variable
    static int iDigit = 0;

    if(iNo != 0)                        // Business Logic
    {
        iDigit = iNo % 10;
        iNo /= 10;
        iProduct *= iDigit;
        Mult(iNo);                      // Recursive call
    }

    return iProduct;
}

int main()                              // Main method
{
    int iValue = 0;                     // Local Variable
    int iRet = 0;

    printf("Enter the Number :\n");     // Accept Number
    scanf("%d", &iValue);
    
    iRet = Mult(iValue);                // Function call

    printf("Product : %d\n", iRet);     // Display Output

    return 0;
}