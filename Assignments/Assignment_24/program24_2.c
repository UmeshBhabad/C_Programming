// Accept N numbers from user and return the Smallest element.

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

// Logic Method

int Minimum(int Arr[], int iSize)                       // Function defination
{
    int iCnt = 0;                                       // Local Variables
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)                 // Business Logic
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

// Time Complexity : O(n)

// Main Method

int main()
{
    int iLength = 0;                                    // Local Variables
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the Array length : \n");              // Accept input array length
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));         // pointer to array, Memory allocation

    if(NULL == ptr)                                     // Check if memory is allcated
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the array elements : \n");            // Accept input array elements

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Minimum(ptr, iLength);                       // Function call

    printf("Smallest element is %d", iRet);              // Display Output

    free(ptr);                                          // Deallocate the allocated memory

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Test Cases
// 
// Input :      N : 6
//              Elements : 85 66 3 66 93 88
//
// Output : 6
// 
///////////////////////////////////////////////////////////////////////////////////////