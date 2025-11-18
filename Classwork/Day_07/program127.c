
#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)                      // Function defination
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)                 // Business Logic
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{  
    int iLength = 0;                                    // Local variables
    int *ptr = NULL;
    int iCnt = 0;
    
    printf("Enter Number of Elements : \n");            // Accept input size
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength*sizeof(int));           // Dynamic array pointer declaration, Dynamic memory allocation

    if(NULL = ptr)                                      // will give error(prevent assignment)
    {
        printf("Unable to locate the memory");
        return -1;
    }

    printf("Enter the elements : \n");                  // Accept array elements

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }


    Display(ptr, iLength);                              // Function call

    free(ptr);                                          // Deallocate allocated memory

    return 0;
}