// Accept N numbers from user and Find the Smallest Element.

#include <stdio.h>
#include <stdlib.h>

typedef int * IPTR;

int Minimum(int Arr[], int iSize)                                   // Function defination
{
    int iCnt = 0;                                                   // Local Variables
    int iMin = 0;

    for(iMin = Arr[0], iCnt = 0; iCnt < iSize; iCnt++)              // Business Logic
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iLength = 0;                                                // Local Variables
    int iCnt = 0, iRet = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");                    // Accept array length
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));                     // pointer to array, Memory allocation
    
    if(NULL == iPtr)                                                // Check if the memory is allocated
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter the Elements :\n");                               // Accept array element
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    // Step 2 : Use the Memory
    
    iRet = Minimum(iPtr, iLength);                                  // Function call

    printf("The largest element in the data is %d\n", iRet);        // Display Output

    // Step 3 : Free the memory.

    free(iPtr);                                                     // Deallocate the allocated memory

    return 0;
}