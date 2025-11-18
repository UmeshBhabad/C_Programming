
#include <stdio.h>

void Display(int Arr[])                     // Function defination(Array decays/converts as pointer)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < 4; iCnt++)         // Business Logic
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{  
    int Brr[] = {10,20,30,40};              // Array declaration, Initialization

    Display(Brr);                           // Function call

    return 0;
}