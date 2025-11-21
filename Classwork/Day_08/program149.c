// Swapping Algorithm

#include <stdio.h>
#include <stdlib.h>


void swap(int *p, int *q)                                   // Function defination
{
    int iTemp = 0;                                          // Local variable

    // Business Logic
    iTemp = *p;
    *p = *q;
    *q = iTemp;
}

int main()
{
    int iValue1 = 11;                                       // Local Variables
    int iValue2 = 21;

    printf("Before swap : %d %d\n", iValue1, iValue2);      // Before Swap

    swap(&iValue1, &iValue2);                               // Function call
    
    printf("After swap : %d %d\n", iValue1, iValue2);       // After Swap 

    return 0;
}