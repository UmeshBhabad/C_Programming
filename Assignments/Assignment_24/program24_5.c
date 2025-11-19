// Accept N numbers from user and display summation of digits of each number.

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

void DigitsSum(int Arr[], int iSize)                    // Function defination
{
    int iCnt = 0;                                       // Local Variables
    int iDigit = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)                 // Business Logic
    {
        iSum = 0;                                       // Reset Sum to 0
        int iNum = Arr[iCnt];

        if(iNum < 0)                                    // Updater
        {
            iNum = -iNum;
        }
        
        while(iNum != 0)
        {
            iDigit = iNum % 10;
            iSum += iDigit;
            iNum /= 10;
        }

        printf("%d\n", iSum);                           // Display Output
    }
}

// Time Complexity : 

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

    DigitsSum(ptr, iLength);                            // Function call

    free(ptr);                                          // Deallocate the allocated memory

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Test Cases
// 
// Input :      N : 6
//              Elements : 8225 665 3   76  953 858
//
// Output : 17  17  3   13  17  21
// 
///////////////////////////////////////////////////////////////////////////////////////