// Program

// Check whether the number is divisible by another number(best approach)

#include <stdio.h>
#include <stdbool.h>

bool isDivisible(int iValue1,int iValue2)                                   // Function defination
{    
    if((iValue1 % iValue1) == 0)                                            // Business Logic
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{

    int iNum1,iNum2 = 0;                                                    // Local variables
    bool bRet = false;

    printf("Enter First Number: ");                                         // Accept first numberfrom User
    scanf("%d",&iNum1);

    printf("Enter Second Number: ");                                        // Accept first numberfrom User
    scanf("%d",&iNum2);

    
    bRet = isDivisible(iNum1,iNum2);                                        // Function call

    if(bRet == true)                                                        // Display result
    {
        printf("It is completely Divisible");
    }
    else
    {
        printf("Not divisible");
    }

    return 0;
}