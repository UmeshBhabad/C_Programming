
#include <stdio.h>

void Display(int Arr[], int iSize)                  // Function to display array elements
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)             // Business Logic
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{  
    int Brr[] = {10,20,30,40};                      // Static array declaration, Initialization

    Display(Brr, 4); // Display(100, 4)             // Function call

    return 0;
}