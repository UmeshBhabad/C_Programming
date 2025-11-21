// Accept N numbers from user and Update all elements by 1.

#include <stdio.h>
#include <stdlib.h>

typedef int * IPTR;

void Update(int Arr[], int iSize)                                   // Function defination
{
    int iCnt = 0;                                                   // Local Variable

    for(iCnt = 0; iCnt < iSize; iCnt++)                             // Business Logic
    {
        Arr[iCnt]++;
    }
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
    
    if(NULL == iPtr)                                                // Check if memory is allocated
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter the Elements :\n");                               // Accept array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    // Step 2 : Use the Memory
    
    Update(iPtr, iLength);                                          // Function call

    printf("Updated data from array is : \n");                      // Display Output

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",iPtr[iCnt]);
    }

    // Step 3 : Free the memory.

    free(iPtr);                                                     // Deallocate the allocated memory

    return 0;
}