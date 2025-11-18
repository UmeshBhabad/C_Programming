
#include <stdio.h>

void Display(int *Arr)                                      // Function defination
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < 4; iCnt++)                         // Business Logic
    {
        printf("%d\n",*(Arr + iCnt));                       // Updating Pointer
    }
}

int main()
{  
    int Brr[] = {10,20,30,40};                              // Array Declaration, Initialization

    Display(Brr);                                           // Function call

    return 0;
}