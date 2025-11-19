// Accept N numbers from user and accept range, Display all elements from that range.

///////////////////////////////////////////////////////////////////////////////////////
// 
// Function     : 
// Description  : 
// Input        : 
// Output       :
// Author       :
// Date         :
// 
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Logic Method

void Range(int Arr[], int iSize, int Start, int End)            // Function defination
{
    int iCnt = 0;                                               // Local Variables
    int iIndex = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)                         // Business Logic
    {
        if(Arr[iCnt] >= Start && Arr[iCnt] <= End)
        {
            printf("%d\n", Arr[iCnt]);
        }        
    }
}

// Time Complexity : O(n)

// Main Method

int main()
{
    int iLength = 0;                                            // Local Variables
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;
    int iStart = 0, iEnd = 0;

    printf("Enter the Array length : \n");                      // Accept input array length
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));                 // pointer to array, Memory allocation

    if(NULL == ptr)                                             // Check if memory is allocated
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the array elements : \n");                    // Accept input array elements

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter the Range : \n");
    scanf("%d %d", &iStart, &iEnd);

    Range(ptr, iLength, iStart, iEnd);                          // Function call

    free(ptr);                                                  // Deallocate the allocated memory

    return 0;
}