
#include <stdio.h>

void Display(int *Arr)                      // Function defination
{
    int iCnt = 0;                           // loop counter
    
    for(iCnt = 0; iCnt < 4; iCnt++)         // Logic
    {
        printf("%d\n",Arr[iCnt]);           // *(Arr + iCnt) == Arr[iCnt]
    }
}

int main()
{  
    int Brr[] = {10,20,30,40};              // Array declaration, initialization

    Display(Brr);                           // Function call

    return 0;
}