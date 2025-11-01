// Program

// Iteration to Display Digits of a Number using Function (Number of iterations depends on input).

#include <stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;                                                             // Local Variable Declaration

    printf("-------------------------------------------------------\n");
    printf("Original value of iNo is : %d\n",iNo);

    while(iNo != 0)                                                             // Logic to Display Digits  
    {
        printf("-------------------------------------------------------\n");
        iDigit = iNo % 10;
        printf("iDigit is : %d\n",iDigit);
        iNo = iNo / 10;
        printf("iNo is : %d\n",iNo);
    }
    
    printf("-------------------------------------------------------\n");

}


int main()
{    
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    DisplayDigits(iValue);
    

    return 0;
}