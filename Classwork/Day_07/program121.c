
#include <stdio.h>

void Display(int Arr[])                     // Function defination
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < 7; iCnt++)         // Business Logic
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{  
    int Brr[] = {10,20,30,40};              // Static Array declaration, Initialization(array reduced to 4 elements)

    Display(Brr);                           // Function call

    return 0;
}