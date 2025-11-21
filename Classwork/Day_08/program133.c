// Dynamic Memory allcation

#include <stdio.h>
#include <stdlib.h>

// main method
int main()
{
    // Local Variables
    int iLength = 0;                                            // Array length Variable
    int iCnt = 0;                                               // loop Counter
    int *iPtr = NULL;                                           // Pointer Variable

    printf("Enter the number of elements : \n");                // Accept Array Length
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (int *)malloc(iLength * sizeof(int));                // Pointer to array, Memory Allocation
    
    if(NULL == iPtr)                                            // If Memory is not allocated
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter the Elements :\n");                           // Accept input array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    // Step 2 : Use the Memory
    // Call to the Function which contains Business Logic
    // Fun(iPtr, iLength);

    // Step 3 : Free the memory.

    free(iPtr);                                                 // Deallocate the allocated memory

    return 0;
}