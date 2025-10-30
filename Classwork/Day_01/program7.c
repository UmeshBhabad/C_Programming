#include <stdio.h>

//Using Proper Naming Conventions(Function and Variable Names)

int AdditionTwoNumbers(int iNo1, int iNo2)               // Function Definition
{    
    int iSum = 0;
    iSum = iNo1+iNo2;                                    // Business Logic
    return iSum;
}

int main()
{    
    int iValue1 = 0, iValue2 = 0, iRet = 0;              // Local Variable
    
    printf("Enter First Number: \n");                    // Input
    scanf("%d",&iValue1);
    
    printf("Enter Second Number: \n");                   // Input
    scanf("%d",&iValue2);
    
    iRet = AdditionTwoNumbers(iValue1,iValue2);          // Function Call

    printf("Addition is: %d\n",iRet);                    // Output
    
    return 0;
}