// Program

// Program to Count Non-Factors

#include <stdio.h>

int CountNonFactors(int iNo)                                    // Function defination
{
    int iCnt, iFrequency = 0;                                   // Local Variable

    if(iNo < 0)                                                 // Updator 
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)                           // Loop
    {

        if((iNo % iCnt) != 0)                                   // Business Logic
        {
            iFrequency++;
        }
    }

    return iFrequency;
}


int main()
{
    int iValue, iRet = 0;                                       // Variable Declaration

    printf("Enter the Number: ");                               // Input  
    scanf("%d",&iValue);

    iRet = CountNonFactors(iValue);                             // Function Call
    
    printf("Number of Non-factors are : %d",iRet);              // Output

    return 0;
}