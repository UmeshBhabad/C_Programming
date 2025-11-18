
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
    
    printf("Enter Number of Elements : \n");            // accept input array length
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength*sizeof(int));           // Dynamic memory allocation, Pointer to store address

    if(ptr == NULL)                                     // If Memory is not allocated(i.e ptr is set to NULL)
    {
        printf("Unable to locate the memory");
        return -1;
    }

    printf("Enter the elements : \n");                  // Accept input array elements

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }


    Display(ptr, iLength);                              // Function Call

    free(ptr);                                          // deallocating pointer

    return 0;
}