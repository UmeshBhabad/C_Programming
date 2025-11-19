// Accept N numbers from user and return the product of all odd numbers.

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

int Product(int Arr[], int iSize)                       // Function defination
{
    int iCnt = 0, iProduct = 1;                         // Local Variables

    for(iCnt = 0; iCnt < iSize; iCnt++)                 // Business Logic
    {
        if(Arr[iCnt] % 2 == 1)
        {
            iProduct *= Arr[iCnt];
        }
    }
    
    return iProduct;
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

    iRet = Product(ptr, iLength);                       // Function call

    printf("Product of Odd elements is %d", iRet);      // Display Output

    free(ptr);                                          // Deallocate the allocated memory

    return 0;
}