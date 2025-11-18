
#include <stdio.h>

void Display(int Arr[])                         // Function defination
{
    int iCnt = 0;
    
                  // Change
    for(iCnt = 0; iCnt < 7; iCnt++)             // Business Logic(prints all elements)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{  
    int Brr[] = {10,20,30,40,50,60,70};         // Static array Declaration, Initialization

    Display(Brr);                               // Function Call

    return 0;
}