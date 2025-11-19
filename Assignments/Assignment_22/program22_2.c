// Accept N numbers from user and return the difference between frequency of even and odd numbers

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

int Frequency(int Arr[], int iSize)                                                 // Function defination
{
    int iCnt = 0, iFreqEven = 0, iFreqOdd = 0;                                      // Local Variables
    int iDiff = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)                                            // Business Logic
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iFreqEven++;
        }
        else
        {
            iFreqOdd++;
        }
    }

    iDiff = iFreqEven - iFreqOdd;

    return iDiff;
}

// Time Complexity : O(n)

// Main Method

int main()
{
    int iLength = 0;                                                                // Local Variables
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the Array length : \n");                                          // Accept input array length
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));                                     // pointer to array, Memory allocation

    if(NULL == ptr)                                                                 // Check if memory is allocated
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the array elements : \n");                                        // Accept input array elements

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Frequency(ptr, iLength);                                                 // Function call

    printf("Difference between frequency of Even and Odd elements is %d", iRet);    // Display Output

    free(ptr);                                                                      // Deallocate the allocated memory

    return 0;
}