
#include <stdio.h>

void Display(int *Arr)                                      // Function defination(pass by Reference)                                   
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < 4; iCnt++,Arr++)                   // Logic(incrementing array in for loop)
    {
        printf("%d\n",*Arr);
    }
}

int main()
{ 
    int Arr[] = {10,20,30,40};                              // Static array declaration, Initiation

    Display(Arr);                                           // Function Call

    return 0;
}