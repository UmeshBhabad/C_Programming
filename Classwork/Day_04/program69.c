//Program

// Count of digits in a Number(iDigit removed)

#include <stdio.h>

int CountDigits(int iNo)                                    // Function defination
{
    int iCount=0;                                           // Local Variable Declaration

    while(iNo != 0)                                         // Logic to Count Digits
    {
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;

}


int main()
{
    int iValue = 0;                                         // Variable Declaration
    int iRet = 0;

    printf("Enter Number : ");                              // Input
    scanf("%d",&iValue);
    
    iRet = CountDigits(iValue);                             // Function Call

    printf("Count of digits in a Number is : %d",iRet);     // Output
    

    return 0;
}