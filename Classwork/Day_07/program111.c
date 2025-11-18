
#include <stdio.h>

int main()
{
    int iCnt = 0;                           // Loop Counter
    int arr[] = {10,20,30,40};              // Static array declaration

    for(iCnt = 0; iCnt < 4; iCnt++)         // Displaying array elements
    {
        printf("%d\n",arr[iCnt]);
    }

    return 0;
}