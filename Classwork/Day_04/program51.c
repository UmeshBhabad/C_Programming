// Progarm

// Program to Count Factors

#include <stdio.h>

int CountFactors(int iNo)                                               // Function defination 
{
    int iCnt, iFrequency = 0;

    if(iNo < 0)                                                         // Updator 
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)                                  // Loop    
    {
        if((iNo % iCnt) == 0)                                           // Business Logic
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{
    int iValue, iRet = 0;                                               // Variable Declaration

    printf("Enter the Number: \n");                                     // Input  
    scanf("%d",&iValue);

    iRet = CountFactors(iValue);                                        // Function Call

    printf("Number of factors are : %d",iRet);

    return 0;
}