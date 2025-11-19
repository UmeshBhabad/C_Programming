// Accept N numbers from user and accept another number No, return the frequency of No from it.

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

int CountEven(int Arr[], int iSize, int iNo)                // Function defination
{
    int iCnt = 0, iFreq = 0;                                // Local Variables

    for(iCnt = 0; iCnt < iSize; iCnt++)                     // Business Logic
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }

    return iFreq;
}

// Time Complexity : O(n)

// Main Method

int main()
{
    int iLength = 0;                                        // Local Variables
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;
    int iValue = 0;

    printf("Enter the Array length : \n");                  // Accept input array length
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));             // pointer to array, Memory allocation

    if(NULL == ptr)                                         // Check if memory is allcated
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

    iRet = CountEven(ptr, iLength, iValue);                 // Function call

    printf("Frequency of Number %d is %d", iValue, iRet);   // Display Output

    free(ptr);                                              // Deallocate the allocated memory

    return 0;
}