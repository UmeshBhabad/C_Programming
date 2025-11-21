// Accept N numbers from user as well as another number and check the frequency of that number.

#include <stdio.h>
#include <stdlib.h>

typedef int * IPTR;

int FrequencyCalculate(int Arr[], int iSize, int iNo)                   // Function to calculated the frequency of an element
{
    int iCnt = 0, iCount = 0;                                           // Local Variables

    for(iCnt = 0; iCnt < iSize; iCnt++)                                 // Business Logic
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        } 
    }
    return iCount;
}

int main()
{
    int iLength = 0;                                                    // Local Variables
    int iCnt = 0, iRet = 0;
    int iValue = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");                        // Input Array length
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));                         // Pointer to array, Memory allocation
    
    if(NULL == iPtr)                                                    // Check if memory is allocated
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter the Elements :\n");                                   // Input array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Enter the Value to calculate the frequency : \n");          // Input value to be counted
    scanf("%d", &iValue);

    // Step 2 : Use the Memory
    
    iRet = FrequencyCalculate(iPtr, iLength, iValue);                   // Function call

    printf("Frequency of %d is : %d\n",iValue, iRet);                   // Display Output

    // Step 3 : Free the memory.

    free(iPtr);                                                         // Deallocated the allocated memory

    return 0;
}