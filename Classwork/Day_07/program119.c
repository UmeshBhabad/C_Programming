
#include <stdio.h>

void Display(int Arr[])                                     // Function defination(pass by reference)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < 4; iCnt++)                         // Business Logic(prints only 4 elements)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{  
    int Brr[] = {10,20,30,40,50,60,70};                     // Change

    Display(Brr);                                           // Function call

    return 0;
}