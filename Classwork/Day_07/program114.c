
#include <stdio.h>

void Display(int *ptr)                                      // Function to display array elements(pass by reference)
{
    int iCnt = 0;                                           // Loop Counter 
    
    for(iCnt = 0; iCnt < 4; iCnt++, ptr++)                  // Logic()
    {
        printf("%d\n",*ptr);
    }
}

int main()
{
    
    int arr[] = {10,20,30,40};                              // Static array DEclaration, Initialization

    Display(arr);                                           // Function Call 

    return 0;
}