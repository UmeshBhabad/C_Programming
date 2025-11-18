
#include <stdio.h>

void Display(int *ptr)                                      // Function defination(Pass by REference)
{
    int iCnt = 0;                                           // Loop Counter
    
    for(iCnt = 0; iCnt < 4; iCnt++)                         // Business Logic
    {
        printf("%d\n",*ptr);
        ptr++;                                              // Incrementing pointer
    }
}

int main()
{
    
    int arr[] = {10,20,30,40};                              // Static array declaration and Initializaton

    Display(arr);                                           // Function call

    return 0;
}