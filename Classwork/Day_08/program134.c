// Using typedef to remove pointer(Smplify code reading)

#include <stdio.h>
#include <stdlib.h>

typedef int * IPTR;                                         // Aliasing (int *) to IPTR

int main()
{
    int iLength = 0;                                        // Local Variables
    int iCnt = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");            // Input array length
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));             // Pointer to array, Memory allocation
    
    if(NULL == iPtr)                                        // Check if memory is allocated
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter the Elements :\n");                       // Accept array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    // Step 2 : Use the Memory
    // Call to the Function which contains Business Logic
    // Fun(iPtr, iLength);

    // Step 3 : Free the memory.

    free(iPtr);                                              // Deallcated the allocated memory

    return 0;
}