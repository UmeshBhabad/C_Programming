// Program

// Factors of Number

#include <stdio.h>

void  DisplayFactors(int iNo)                                           // Function Definition
{
    int iCnt = 0;                                                       // Loop counter   
    
    if(iNo < 0)                                                         // Updator  
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)                                   // Iteration
    {
        if(iNo % iCnt == 0)                                             // Logic
        {
            printf("%d\n",iCnt);
        }
    }
    
        
    
}

int main()
{
    int iValue = 0;                                                     // Local Variable
    
    printf("Enter the Number: ");                                       // Input
    scanf("%d",&iValue);

    DisplayFactors(iValue);                                             // Function Call


    return 0;
}