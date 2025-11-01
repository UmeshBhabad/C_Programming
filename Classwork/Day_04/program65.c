// Iteration to Display Digits of a Number (Number of iterations depends on input).

#include <stdio.h>

int main()
{
    int iNo = 723614;                                                           // Variable Declaration
    int iDigit = 0;

    printf("-------------------------------------------------------\n");        // Separator
    printf("Original value of iNo is : %d\n",iNo);

    while(iNo != 0)                                                             // while Loop for iteration
    {
        printf("-------------------------------------------------------\n");
        iDigit = iNo % 10;
        printf("iDigit is : %d\n",iDigit);
        iNo = iNo / 10;
        printf("iNo is : %d\n",iNo);
    }
    
    printf("-------------------------------------------------------\n");

    return 0;
}