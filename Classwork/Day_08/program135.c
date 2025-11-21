// Accept N numbers from user and check the frequency of the value 11.

#include <stdio.h>
#include <stdlib.h>

typedef int * IPTR;

int FrequencyCalculate(int Arr[], int iSize)                // Function defination
{
    int iCnt = 0, iCount = 0;                               // Local Variables

    for(iCnt = 0; iCnt < iSize; iCnt++)                     // Business Logic
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        } 
    }
    return iCount;
}

int main()
{
    int iLength = 0;                                        // Local Variables
    int iCnt = 0, iRet = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");            // Accept input array length
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));             // Pointer to array, Memory allcation
    
    if(NULL == iPtr)                                        // Check for allocated memory
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter the Elements :\n");                       // Accept input array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    // Step 2 : Use the Memory
    
    iRet = FrequencyCalculate(iPtr, iLength);               // Function call

    printf("Frequency of 11 is : %d\n", iRet);              // Display Output

    // Step 3 : Free the memory.

    free(iPtr);                                             // Deallocated the allocated memory

    return 0;
}