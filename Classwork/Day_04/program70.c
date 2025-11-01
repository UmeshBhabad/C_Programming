// Program

// Sumation of digits in a Number

#include <stdio.h>

int SumDigits(int iNo)                                          // Function defination    
{
    int iDigit = 0;                                             // Local Variable
    int iSum = 0;

    if(iNo < 0)                                                 // Updator   
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)                                             // Loop   
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        iSum += iDigit;                                         // Business Logic  

    }
    return iSum;

}


int main()
{
    int iValue = 0;                                             // Variable Declaration  
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    iRet = SumDigits(iValue);                                   // Function Call

    printf("Sum of digits in a Number is : %d",iRet);           // Output
    
    return 0;
}