
#include <stdio.h>

void Display(int *ptr)                                          // Issue(Pointer is never incremented)
{
    int iCnt = 0;                                               // Loop Counter
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",*ptr);                                    // Pointer is never incremented
    }
}

int main()
{    
    int arr[]={10,20,30,40};

    Display(arr);

    return 0;
}