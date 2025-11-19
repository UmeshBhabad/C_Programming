// Accept N numbers from user and accept one another number as No, return index of last occerence of that No.

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

int LastOcc(int Arr[], int iSize, int iNo)                      // Function defination
{
    int iCnt = 0;                                               // Local Variables
    int iIndex = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)                         // Business Logic
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
        }        
    }

    return iIndex;
}

// Time Complexity : O(n)

// Main Method

int main()
{
    int iLength = 0;                                            // Local Variables
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;
    int iValue = 0;

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

    printf("Enter the Number to find : \n");
    scanf("%d", &iValue);

    iRet = LastOcc(ptr, iLength, iValue);                       // Function call

    printf("Index last occurrence of %d is %d", iValue, iRet);  // Display Output

    free(ptr);                                                  // Deallocate the allocated memory

    return 0;
}