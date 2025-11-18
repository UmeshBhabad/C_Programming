
#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)                      // Function defination(pass by reference, pass by value)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)                 // Business Logic
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{  
    // Local variables
    int iLength = 0;                                    // array length
    int *ptr = NULL;                                    // pointer to array
    int iCnt = 0;                                       // loop counter
    
    printf("Enter Number of Elements : \n");            // accept input array length
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength*sizeof(int));           // allocates memory and the address is stored in pointer

    printf("Enter the elements : \n");                  // Accepts input array elements

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iLength);                              // Function call

    free(ptr);                                          // used to deallocate dynamically allocated memory

    return 0;
}


/*
ptr = (int *)malloc(Length*sizeof(int)):


malloc(): It requests a block of memory from the heap.

sizeof(int): determines the size in bytes (typically 4 bytes).

Length*sizeof(int): calculates the total number of bytes needed to store Length number of integers.

(int *): (malloc() returns a void* pointer) explicitly cast to an int* pointer.

ptr = ...: The address of the newly allocated memory block.
*/