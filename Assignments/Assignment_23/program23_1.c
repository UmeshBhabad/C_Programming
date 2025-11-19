// Accept N numbers from user and accept one another number as No, check whether it contains number No in it or not.

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

bool Check(int Arr[], int iSize, int iNo)                   // Function defination
{
    int iCnt = 0;                                           // Local Variables

    for(iCnt = 0; iCnt < iSize; iCnt++)                     // Business Logic
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }        
    }

    return false;
}

// Time Complexity : O(n)

// Main Method

int main()
{
    int iLength = 0;                                        // Local Variables
    int iCnt = 0;
    int *ptr = NULL;
    bool bRet = 0;
    int iValue = 0;

    printf("Enter the Array length : \n");                  // Accept input array length
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));             // pointer to array, Memory allocation

    if(NULL == ptr)                                         // Check if memory is allocated
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the array elements : \n");                // Accept input array elements

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter the Number to find : \n");
    scanf("%d", &iValue);

    bRet = Check(ptr, iLength, iValue);                     // Function call

    if(bRet)                                                // Display Output
    {
        printf("%d is present", iValue);
    }
    else
    {
        printf("%d is not present", iValue);
    }

    free(ptr);                                              // Deallocate the allocated memory

    return 0;
}