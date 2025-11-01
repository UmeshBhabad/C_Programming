// Program

// Program to check whether num1 is divisible by num2(good approach)

#include <stdio.h>

int main()
{
    int iNum1,iNum2 = 0;                                    // Local Variables

    printf("Enter First Number: ");                         // Accept first number from User
    scanf("%d",&iNum1);

    printf("Enter Second Number: ");                        // Accept second number from User
    scanf("%d",&iNum2);

    if(iNum1 % iNum2 == 0)                                  // Business Logic
    {
        printf("Divisible");
    }
    else
    {
        printf("Not divisible");
    }
    
    return 0;
}