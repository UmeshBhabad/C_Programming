// Write a recursive program which accept number from user and return its factorial.

/*
    Input   :   5

    Output  :   120
*/
#include <stdio.h>

int Fact(int iNo)                       // Function defination
{
    static int iCnt;                    // Local Variable
    static int iRes = 1;

    static int isInitialized = 0;

    if(!isInitialized)
    {
        iCnt = iNo;
        isInitialized = 1;
    }

    if(iCnt > 0)                        // Business Logic
    {
        iRes *= iCnt;
        iCnt--;
        Fact(iNo);
    }

    return iRes;
}

int main()                              // Main method
{
    int iValue = 0;                     // Local Variable
    int iRet = 0;

    printf("Enter the Number :\n");     // Accept Number
    scanf("%d", &iValue);
    
    iRet = Fact(iValue);                // Function call

    printf("Factorial : %d\n", iRet);   // Display Output

    return 0;
}