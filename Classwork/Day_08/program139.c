// Accept N numbers from user as well as another number and check whether the number is present in the array(Different Approach).

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int * IPTR;

// Time Complexity : < O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)                // Function Defination
{
    int iCnt = 0;                                               // Local Variable

    for(iCnt = 0; iCnt < iSize; iCnt++)                         // Business Logic
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        } 
    }
    
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0;                                            // Local Variables
    int iCnt = 0;
    bool bRet = false;
    int iValue = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");                // Accept Input array length
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));                 // pointer to array, Memory allocation
    
    if(NULL == iPtr)                                            // Check if memory is allocated
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter the Elements :\n");                           // Input array elements
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Enter the Value to Search : \n");                   // Input Value to Search
    scanf("%d", &iValue);

    // Step 2 : Use the Memory
    
    bRet = LinearSearch(iPtr, iLength, iValue);                 // Function call

    if(bRet == true)                                            // Display Output
    {
        printf("%d is Present in the Data\n", iValue);
    }
    else
    {
        printf("%d is Not Present in the Data\n", iValue);
    }

    // Step 3 : Free the memory.

    free(iPtr);                                                 // Deallocate the allocated memory

    return 0;
}